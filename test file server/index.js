const express = require("express");
const cors = require("cors");
const fs = require("fs");
const https = require("https");
const { Server } = require("http");
const app = express();

const PORT = 8080;

app.use(express.json());
app.use(cors());

app.listen(PORT, () => console.log("it's alive on http://localhost:" + PORT));


app.get("/download/", (req, res) => {
  res.status(418).send({
    content: "im not a coffee pot",
  });
});

app.get("/download/:id", cors(), function (req, res) {
  const { id } = req.params;
  const file = `${__dirname}/upload-folder/${id}`;
  if (fs.existsSync(file)) {
    res.status(200).download(file);
  } else {
    res.redirect("/404");
  }
});

app.get("/404", function (req, res) {
  res.status(404).send({
    content: "Not Found",
  });
});

app.use(function (req, res, next) {
  res.status(404);
  // respond with json
  if (req.accepts("json")) {
    res.json({ error: "Not found" });
    return;
  }
  res.type("txt").send("Not found");
});





//https://stackoverflow.com/questions/6158933/how-is-an-http-post-request-made-in-node-js/71991867#71991867

//https://stackoverflow.com/questions/9577611/http-get-request-in-node-js-express
