// shit shit shit
// spam stop commands in a futile attempt to save yourself

var copters = require('./copters')
setInterval(function() {
  console.log('panic')
  copters.each(function(client) {
    client.animateLeds('redSnake', 5, 2)
    client.stop()
    client.land()
  })
}, 2000)
