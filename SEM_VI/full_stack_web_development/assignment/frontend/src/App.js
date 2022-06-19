import React, { Component } from "react";
import { BrowserRouter, Routes, Route } from "react-router-dom";

import Navbar from "./components/Navbar";
import CreateReminder from "./components/CreateReminder";
import ViewReminders from "./components/ViewReminders";

class App extends Component {
  render() {
    return (
      <BrowserRouter>
        <Navbar />
        <Routes>
          {/* <Route exact path="/" element={<Todos />} /> */}
          <Route exact path="/create" element={<CreateReminder />} />
          <Route exact path="/view" element={<ViewReminders />} />
        </Routes>
      </BrowserRouter>
    );
  }
}

export default App;
