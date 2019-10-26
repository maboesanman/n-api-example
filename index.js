const process = require('process');
const importUrl = process.env.NODE_ENV === 'debug' ? 
  './build/Debug/exampleaddon.node' : './build/Release/exampleaddon.node';
const exampleAddon = require(importUrl);

for(let i=0; i< 10; i++) {
  console.log(exampleAddon.hello(i));
}