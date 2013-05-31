var arDrone = require('ar-drone');
var ip = process.argv[2];
console.log(ip);
var client  = arDrone.createClient({ip: ip});

client.takeoff();

client
  .after(5000, function() {
    this.clockwise(0.5);
  })
  .after(3000, function() {
    this.stop();
    this.land();
  });
