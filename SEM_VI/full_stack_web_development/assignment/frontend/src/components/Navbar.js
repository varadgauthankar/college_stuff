import React from "react";
import { Link, NavLink } from "react-router-dom";

function Navbar() {
  return (
    <nav>
      <div>
        <Link to="/">MyReminders</Link>
        <ul>
          <li>
            <NavLink to="/create">Create Reminder</NavLink>
          </li>
          <li>
            <NavLink to="/view">View Reminders</NavLink>
          </li>
        </ul>
      </div>
    </nav>
  );
}

export default Navbar;
