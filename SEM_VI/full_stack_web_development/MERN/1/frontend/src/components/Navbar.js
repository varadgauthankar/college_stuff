import React from "react";
import { Link, NavLink } from "react-router-dom";

function Navbar() {
  return (
    <nav>
      <div>
        <Link to="/">HELLO</Link>
        <ul>
          <li>
            <NavLink to="/create">Create Course</NavLink>
          </li>
          <li>
            <NavLink to="/read">Read Courses</NavLink>
          </li>
        </ul>
      </div>
    </nav>
  );
}

export default Navbar;
