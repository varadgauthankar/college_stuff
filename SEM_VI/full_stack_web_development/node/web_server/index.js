var http = require("http");

var server = http.createServer((req, res) => {
  res.writeHead(200, { "Content-Type": "text/html" });
  if (req.url == "/") {
    res.write("Home Screen");
    res.end();
  } else if (req.url == "/about") {
    res.write("About Screen");
    res.end();
  } else if (req.url == "/contact") {
    res.write("Contact Screen");
    res.end();
  }
});

server.listen(3000);
