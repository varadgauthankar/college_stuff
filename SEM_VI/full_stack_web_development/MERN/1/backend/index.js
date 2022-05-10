const express = require("express");
const mongodb = require("mongodb");
const cors = require("cors");

const mongoClient = mongodb.MongoClient;
const connectionURL = "mongodb://localhost:27017";

const app = express();

app.use(cors());
app.use(express.json());

const port = 8000;

const dbName = "college";

// routes

app.get("/api/courses", (req, res) => {
  mongoClient.connect(
    connectionURL,
    { useNewUrlParser: true },
    (err, client) => {
      if (err) {
        return console.log(err);
      }

      const db = client.db(dbName);
      db.collection("course")
        .find()
        .toArray()
        .then((result) => {
          res.send(result);
        });
    }
  );
});

app.post("/api/create-course", (req, res) => {
  const name = req.body.name;
  const duration = req.body.duration;
  mongoClient.connect(
    connectionURL,
    { useNewUrlParser: true },
    (err, client) => {
      if (err) {
        return console.log(err);
      }

      const db = client.db(dbName);
      db.collection("course")
        .insertOne({
          name: name,
          duration: duration,
        })
        .then((result) => {
          res.send(result);
        });
    }
  );
});

app.listen(port, () => {
  console.log("LISTENING ON PORT " + port);
});
