function fn() {
  console.log("Hello");
}

const fnn = () => console.log("ARROW");

console.log("\nCALLING FUNCTIONS");
fn();
fnn();

const students = [
  {
    name: "varad",
  },
  {
    name: "john",
  },
  {
    name: "doe",
  },
];

const fruites = ["apple", "banana"];

for (fruit in fruites) {
  console.log(fruit);
}

console.log(fruites.join("#"));

console.log("\nFOR EACH");
students.forEach((e) => console.log(e.name));

console.log("\nFOR OF");
for (student of students) {
  console.log(student.name);
}

console.log("\nMAP");
var stu = students.map((e) => "name: " + e.name);
console.log(stu);
