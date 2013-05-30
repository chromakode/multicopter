// blinkenlights based on battery charge

var copters = require('./copters')

copters.events.once('connected', function() {
  copters.each(function(client) {
    client.animateLeds('snakeGreenRed', 5, 2)

    setTimeout(function() {
      client.on('batteryChange', function(batt) {
        if (batt > 50) {
          client.animateLeds('blinkGreen', 5, 40)
        } else if (batt > 30) {
          client.animateLeds('blinkOrange', 5, 40)
        } else {
          client.animateLeds('blinkRed', 5, 40)
        }
      })
    }, 1000)
  })
})
