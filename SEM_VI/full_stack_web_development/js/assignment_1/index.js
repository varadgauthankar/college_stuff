function callFunction() {
  const user = {
    name: "Varad",
    address: "Bicholim",
  };

  bankDetails(user, simpleInterest);
}

function bankDetails(user, callback) {
  var balance = parseInt(prompt("Enter Balance"));

  var interest = callback(balance, 5);

  document.getElementById(
    "user"
  ).innerText = `Name: ${user.name}\nAddress: ${user.address}`;

  document.getElementById("interest").innerText = `Final Balance: ${
    balance + interest
  }
  `;
}

simpleInterest = (balance, noOfYears) =>
  (balance * (balance < 10000 ? 5 : 7) * noOfYears) / 100;
