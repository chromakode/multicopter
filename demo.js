// let's have some fun

var copters = require('./copters')

copters.events.once('connected', function() {
  copters.each(function(client) {
    client.animateLeds('blinkOrange', 5, 40)
    client.takeoff(function() {
      client.up(.8)
      client.after(3000, function() {
        client.stop()
        client.front(1)
      })
      client.after(5000, function() {
        client.stop()
        client.animate('turnaround', 1500);
      })
      client.after(70000, function() {
        this.stop()
        this.land()
      })
    })
  })
})
