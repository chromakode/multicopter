// drones are assumed to have a fleet id "fid" number from 1-254, and available
// on the network at 192.168.1.{id}

var EventEmitter = require('events').EventEmitter;
var _ = require('underscore')
var arDrone = require('ar-drone')

module.exports = {};

// fleet management events
events = module.exports.events = new EventEmitter

// clients indexed by fid
clients = module.exports.clients = {}
ready = {}

// connect to a client by id
// prints status messages and battery charges periodically
connect = module.exports.connect = function(id) {
  var c = arDrone.createClient({
    ip: '192.168.1.' + id
  })
  c._fid = id
  clients[id] = c
  ready[id] = false
  console.log('[%s]\tconnecting', c._fid)
  c.once('navdata', function() {
    console.log('[%s]\tconnected', c._fid)
    ready[id] = true
    // this is a bit broken at the moment. I observed that sometimes our fleet
    // wouldn't respond at all to scripts, so ready was an experiment in
    // waiting until we got data back from all copters before proceeding. it
    // didn't work better in practice, and is now broken since `connect` calls
    // are run in an interval delay loop. maybe it'll be useful someday.
    if (_.all(ready)) {
      console.log('** all ready **')
      events.emit('ready')
    }
  })
  c.on('batteryChange', function(batt) {
    console.log('[%s]\tbattery: %s', c._fid, batt)
  })
}

// wreak havoc
each = module.exports.each = function(cb) {
  cs = _.values(clients)
  var interval = setInterval(function() {
    cb(cs.pop())
    if (!cs.length) {
      clearInterval(interval)
    }
  }, 50)
}

