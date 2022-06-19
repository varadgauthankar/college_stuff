const express = require("express");
const mongodb = require("mongodb");
const cors = require("cors");

const mongoClient = mongodb.MongoClient;
const connectionURL = "mongodb://localhost:27017";

const ObjectId = mongodb.ObjectId;

const app = express();

app.use(cors());
app.use(express.json());

const port = 8000;

const dbName = "reminder";
const collection = "reminders";

// routes

app.get("/api/get-reminders", (req, res) => {
  mongoClient.connect(
    connectionURL,
    { useNewUrlParser: true },
    (err, client) => {
      if (err) {
        return console.log(err);
      }

      const db = client.db(dbName);
      db.collection(collection)
        .find()
        .toArray()
        .then((result) => {
          res.send(result);
        });
    }
  );
});

app.post("/api/create-reminder", (req, res) => {
  const title = req.body.title;
  const description = req.body.description;
  const date = req.body.date;
  const time = req.body.time;
  const priority = req.body.priority;

  mongoClient.connect(
    connectionURL,
    { useNewUrlParser: true },
    (err, client) => {
      if (err) {
        return console.log(err);
      }

      const db = client.db(dbName);
      db.collection(collection)
        .insertOne({
          title: title,
          description: description,
          date: date,
          time: time,
          priority: priority,
        })
        .then((result) => {
          res.send(result);
        });
    }
  );
});

app.put("/api/update-reminder", (req, res) => {
  const id = req.body.id;
  const title = req.body.title;
  const description = req.body.description;
  const date = req.body.date;
  const time = req.body.time;
  const priority = req.body.priority;

  console.log(id);

  mongoClient.connect(
    connectionURL,
    { useNewUrlParser: true },
    (err, client) => {
      if (err) {
        return console.log(err);
      }

      const db = client.db(dbName);
      db.collection(collection)
        .updateOne(
          { _id: ObjectId(id) },
          {
            $set: {
              title: title,
              description: description,
              date: date,
              time: time,
              priority: priority,
            },
          }
        )
        .then((result) => {
          res.send(result);
        });
    }
  );
});

app.delete("/api/delete-reminder/:id", (req, res) => {
  const id = req.params.id;

  console.log(req.params.id);

  mongoClient.connect(
    connectionURL,
    { useNewUrlParser: true },
    (err, client) => {
      if (err) {
        return console.log(err);
      }

      const db = client.db(dbName);
      db.collection(collection)
        .deleteOne({
          _id: ObjectId(id),
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
