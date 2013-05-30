// a poor man's shared setup file

var _ = require('underscore')
var copters = require('./multicopter')

// yuck
module.exports = copters

toConnect = [47, 29, 27, 35, 19, 24, 33, 3, 3, 21, 39, 14, 11, 25, 40, 38]
var interval = setInterval(function() {
  copters.connect(toConnect.pop())
  if (!toConnect.length) {
    copters.events.emit('connected')
    clearInterval(interval)
  }
}, 100)
