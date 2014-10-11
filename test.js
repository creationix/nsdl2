var binding = require('./build/Release/nsdl2.node');

console.log(binding);

console.log({
  numJoysticks: binding.numJoysticks(),
});
