// > console.log("Hello world");

// > var x = 10;
// > var y = 20;
// > x + y

// > x === y

// > function test(x){
//     ... console.log(x*x);
//     ... }
// > test(2)
//     4

// >  buf = new Buffer.alloc(5)
// <Buffer 00 00 00 00 00>
// > buf
// <Buffer 00 00 00 00 00>
// >
// > buf.toString("ascii",0,3);
// '\x00\x00\x00'
// > buf.write("hi");
// 2
// >
// >
// > buf.toString("ascii",0,3);
// 'hi\x00'
// > buf.toString("ascii",0,3);
// 'hi\x00'
// >

var buffer = new Buffer.alloc(200);
for (var buff in buffer) {
  console.log(buff);
}
