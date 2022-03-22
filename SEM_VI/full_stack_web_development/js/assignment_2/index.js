const employees = [
  { ssn: "123", nkname: "Jim", salary: 5000, dept: "sales" },
  { ssn: "234", nkname: "Kim", salary: 4000, dept: "adv" },
  { ssn: "345", nkname: "Rim", salary: 5500, dept: "production" },
  { ssn: "456", nkname: "Sim", salary: 5000, dept: "sales" },
  { ssn: "567", nkname: "Tim", salary: 7000, dept: "adv" },
];

function calculateAverageSalary(dept) {
  var filteredEmployees = employees.filter((e) => e.dept === dept);
  console.log(`Employess of department ${dept}:`);

  filteredEmployees.forEach((e) =>
    console.log(`Name: ${e.nkname.toUpperCase()} \t salary: ${e.salary}`)
  );

  var averageSalary = filteredEmployees.reduce((a, b) => a.salary + b.salary);
  console.log("\nAverage Salary:" + averageSalary);
}

calculateAverageSalary("adv");
