const hello_module = require('bindings')('hello_world');
console.log(hello_module.hello_world());