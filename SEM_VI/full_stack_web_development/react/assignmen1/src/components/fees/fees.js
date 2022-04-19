import React from "react";

export class Fees extends React.Component {
  constructor(props) {
    super(props);
    this.state = [
      { name: "Varad", paid: true },
      { name: "John", paid: false },
      { name: "Apple", paid: true },
      { name: "Doe", paid: false },
      { name: "Hello", paid: true },
      { name: "Jon", paid: true },
    ];
  }
  render() {
    return (
      <table>
        <tr>
          <th>Name</th>
          <th>Fees paid</th>
        </tr>

        {this.state.map((e) => (
          <tr>
            <td>{e.name}</td>
            <td style={{ display: "flex", alignItems: "center" }}>
              <p style={{ color: !e.paid ? "red" : "" }}>
                {e.paid ? "Paid" : "Not Paid"}
              </p>
              <input readOnly type="checkbox" checked={e.paid}></input>
            </td>
          </tr>
        ))}
      </table>
    );
  }
}
