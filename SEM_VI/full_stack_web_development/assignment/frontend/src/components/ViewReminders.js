import React from "react";
import axios from "axios";

class ViewReminders extends React.Component {
  constructor(props) {
    super(props);
    this.state = {
      isUpdate: false,
      id: null,
      reminders: [],
      title: null,
      description: null,
      date: null,
      time: null,
      priority: null,
    };
  }

  componentDidMount() {
    axios
      .get("http://localhost:8000/api/get-reminders")
      .then((res) => {
        const reminders = res.data;
        this.setState({ reminders: reminders });
      })
      .catch((err) => {
        console.log("err", err);
      });
  }

  deleteReminder(id) {
    axios
      .delete(`http://localhost:8000/api/delete-reminder/${id}`)
      .then((res) => {
        window.location.reload(false);
        console.log(res);
      })
      .catch((err) => {
        console.log("err", err);
      });
  }

  updateReminder(id) {
    const data = {
      id: id,
      title: this.state.title,
      description: this.state.description,
      date: this.state.date,
      time: this.state.time,
      priority: this.state.priority,
    };

    console.log(data);

    axios
      .put("http://localhost:8000/api/update-reminder/", data)
      .then((res) => {
        window.location.reload(false);
        console.log(res);
      })
      .catch((err) => {
        console.log("err", err);
      });
  }

  onInputChange = (event) => {
    this.setState({ [event.target.name]: event.target.value });
  };

  render() {
    return (
      <div>
        <p>My Reminders</p>
        <table border="1">
          <tr>
            <td>Title</td>
            <td>Description</td>
            <td>DateTime</td>
            <td>Priority</td>
          </tr>
          {this.state.reminders.map((reminder) => {
            return (
              <tr>
                <td>{reminder.title}</td>

                <td>{reminder.description}</td>

                <td>
                  {reminder.date} : {reminder.time}
                </td>

                <td>{reminder.priority}</td>

                <button onClick={() => this.deleteReminder(reminder._id)}>
                  Delete
                </button>

                <button
                  onClick={() =>
                    this.setState({
                      isUpdate: true,
                      id: reminder._id,
                      title: reminder.title,
                      description: reminder.description,
                      date: reminder.date,
                      time: reminder.time,
                      priority: reminder.priority,
                    })
                  }
                >
                  Update
                </button>
              </tr>
            );
          })}
        </table>

        <br />
        <br />
        <br />

        {this.state.isUpdate ? (
          <div>
            <h3>ENTER NEW DETAILS</h3>

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

            <button onClick={() => this.updateReminder(this.state.id)}>
              Update reminder
            </button>
          </div>
        ) : (
          <div></div>
        )}
      </div>
    );
  }
}

export default ViewReminders;
