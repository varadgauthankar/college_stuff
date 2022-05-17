import React from "react";
import axios from "axios";

class ReadCourse extends React.Component {
  constructor(props) {
    super(props);
    this.state = { CourseList: [] };
  }

  componentDidMount() {
    axios
      .get("http://localhost:8000/api/courses")
      .then((res) => {
        const courses = res.data;
        this.setState({ CourseList: courses });
      })
      .catch((err) => {
        console.log("Error", err);
      });
  }

  render() {
    return (
      <table border="1">
        <tr>
          <td>Course Name</td>
          <td>Course Duration</td>
        </tr>
        {this.state.CourseList.map((course) => {
          return (
            <tr>
              <td>{course.name}</td>
              <td>{course.duration}</td>
            </tr>
          );
        })}
      </table>
    );
  }
}

export default ReadCourse;
