import React from "react";
import axios from "axios";

class CreateCourse extends React.Component {
  constructor(props) {
    super(props);

    this.state = {
      name: null,
      duration: null,
    };
  }

  onSubmitHandler = (event) => {
    const data = {
      name: this.state.name,
      duration: this.state.duration,
    };
    console.log(data);
    axios
      .post("http://localhost:8000/api/create-course", data)
      .then((res) => console.log(res))
      .catch((err) => console.log(err));
    event.submitDefault();
  };

  onChangeCourseNameHandler = (event) => {
    this.setState({ name: event.target.value });
  };

  onChangeCourseDurationHandler = (event) => {
    this.setState({ duration: event.target.value });
  };

  render() {
    return (
      <div>
        <form onSubmit={this.onSubmitHandler}>
          <input
            placeholder="name"
            value={this.state.name}
            onChange={this.onChangeCourseNameHandler}
          />
          <input
            placeholder="duration"
            value={this.state.duration}
            onChange={this.onChangeCourseDurationHandler}
          />
          <button type="submit"> Create Course</button>
        </form>
      </div>
    );
  }
}
export default CreateCourse;
