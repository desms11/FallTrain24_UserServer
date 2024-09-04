# FallTrain24_UserServer
FallTrain24_UserServer, the user connects to a router then the server.
steps should be done while connected to testing router.

## Arduino part
- used arduino IDE
- follow this guide for setup, some parts are skipped. https://www.instructables.com/Getting-Started-With-ESP8266LiLon-NodeMCU-V3Flashi/
- skip step 1: installing the firmware
- skip the part where LEDs are connected
- use the code in the arduino IDE, verify, upload.
- when the server is started and the code uploaded, the serial monitor should output the json message.

## Server part
- install node js in native windows
- create file with code
- open directory with the file in cmd prompt
- type 'node json.js'
- server should start
- in cmd prompt type ipconfig to see ipv4
