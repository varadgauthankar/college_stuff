import React from "react";
import axios from "axios";

class CreateReminder extends React.Component {
  constructor(props) {
    super(props);

    this.state = {
      title: null,
      description: null,
      date: null,
      time: null,
      priority: null,
    };
  }

  onFormSubmit = (event) => {
    const data = {
      title: this.state.title,
      description: this.state.description,
      date: this.state.date,
      time: this.state.time,
      priority: this.state.priority,
    };

    console.log(data);

    axios
      .post("http://localhost:8000/api/create-reminder", data)
      .then((res) => {
        event.submitDefault();
        console.log(res);
      })
      .catch((err) => console.log(err));
  };

  onInputChange = (event) => {
    this.setState({ [event.target.name]: event.target.value });
  };

  render() {
    console.log(this.props.location);
    return (
      <div>
        <h3>Create Reminder</h3>
        <form onSubmit={this.onFormSubmit}>
          <label>Title: </label>
          <input
            id="title"
            name="title"
            placeholder="title"
            value={this.state.title}
            onChange={this.onInputChange}
          />

          <br />

          <label>Description: </label>
          <input
            name="description"
            placeholder="description"
            value={this.state.description}
            onChange={this.onInputChange}
          />

          <br />

          <label>DateTime: </label>
          <input
            type={"date"}
            name="date"
            value={this.state.date}
            onChange={this.onInputChange}
          />

          <input
            type={"time"}
            name="time"
            value={this.state.time}
            onChange={this.onInputChange}
          />

          <br />

          <label>Priority: </label>
          <select onChange={this.onInputChange} name="priority">
            <option value="low">Low</option>
            <option value="normal">Normal</option>
            <option value="high">High</option>
          </select>

          <br />
          <br />

          <button type="submit">Create reminder</button>
        </form>
      </div>
    );
  }
}

export default CreateReminder;
