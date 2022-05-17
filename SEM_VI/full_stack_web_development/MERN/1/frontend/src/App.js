import React, { Component } from "react";
import { BrowserRouter, Routes, Route } from "react-router-dom";
import CreateCourse from "./components/CreateCourse";
import Navbar from "./components/Navbar";
import ReadCourse from "./components/ReadCourse";

class App extends Component {
  render() {
    return (
      <BrowserRouter>
        <Navbar />
        <Routes>
          <Route exact path="/create" element={<CreateCourse />} />
          <Route exact path="/read" element={<ReadCourse />} />
        </Routes>
      </BrowserRouter>
    );
  }
}

export default App;
