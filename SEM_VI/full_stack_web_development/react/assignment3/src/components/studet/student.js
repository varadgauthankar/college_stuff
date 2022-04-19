import React from "react";

export class Students extends React.Component {
  constructor(props) {
    super(props);
    this.state = [
      { name: "jim", age: 20, subject: "Maths" },
      { name: "kim", age: 30, subject: "Physics" },
      { name: "john", age: 25, subject: "Chemistry" },
      { name: "Doe", age: 20, subject: "Maths" },
    ];
  }
  render() {
    return (
      <table>
        <tr>
          <th>Name</th>
          <th>Subject</th>
          <th>Age</th>
        </tr>

        {this.state.map((e) => (
          <tr style={{ backgroundColor: e.age > 20 ? "red" : "" }}>
            <td>{e.name}</td>
            <td>{e.subject}</td>
            <td>{e.age}</td>
          </tr>
        ))}
      </table>
    );
  }
}
