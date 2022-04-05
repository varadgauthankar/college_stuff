var fs = require("fs");

// fs.readFile("test.txt", "utf8", (e, data) => {
//   if (e) console.log(e);
//   else console.log(data);
// });

var data = fs.readFileSync("test_write.txt", "utf8");
console.log(data);

fs.writeFile("test_write.txt", "Heyyyyyy", (e) => {
  if (e) console.log("Error writing file: " + e);
});

fs.appendFile("test_write.txt", "Heyyyyyy", (e) => {
  if (e) console.log("Error writing file: " + e);
});

// fs.unlink("test_write.txt", () => console.log("file deleted"));

// fs.rename("test_write.txt", "sheesh.txt", () => {});
