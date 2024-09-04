const http = require("http");

const host ='0.0.0.0';
const port = 8000;

const requestListener = function (req, res) {
    res.setHeader("Content-Type", "application/json");
    res.writeHead(200);
    res.end({"message": "Congratulations!!! this is the WiFi API task message for the fall train."});
};

const server = http.createServer(requestListener);
server.listen(port, host, () => {
    console.log(Server is running on http://${host}:${port});
});
