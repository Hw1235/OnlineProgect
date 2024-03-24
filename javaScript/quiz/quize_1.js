//what is the ouput of this code?
var a = null == undefined;
var b = null === undefined;
var c = b || a || (a && b);
console.log(c);
