#include "src/BottangoCore.h"
#include "src/BasicCommands.h"
#include <WiFi.h>
#include <WebServer.h>
#include "esp_wifi.h"

const char* ssid     = "Sonya";
const char* password = "sonyaale";

WebServer server(80);
volatile int pendingAnimation = -1;

void handleRoot() {
  String html = "";
  html += "<!DOCTYPE html><html>";
  html += "<head>";
  html += "<meta name='viewport' content='width=device-width, initial-scale=1'>";
  html += "<title>Animation Controller</title>";
  html += "<style>";
  html += "body{font-family:sans-serif;background:#111;color:white;text-align:center;padding:20px;}";
  html += "h1{font-size:24px;margin-bottom:30px;}";
  html += "button{display:block;width:80%;margin:12px auto;padding:18px;font-size:18px;border:none;border-radius:12px;background:#1e90ff;color:white;cursor:pointer;}";
  html += "button:active{background:#0066cc;}";
  html += "</style></head>";
  html += "<body>";
  html += "<h1>Animation Controller</h1>";
  html += "<button onclick=\"trigger(0)\">Handshake</button>";
  html += "<button onclick=\"trigger(1)\">Left Arm Wave</button>";
  html += "<button onclick=\"trigger(2)\">Sad Rocket</button>";
  html += "<button onclick=\"trigger(3)\">Dance Party</button>";
  html += "<button onclick=\"trigger(4)\">No.</button>";
  html += "<button onclick=\"trigger(5)\">Yes!</button>";
  html += "<button onclick=\"trigger(6)\">Shrug</button>";
  html += "<button onclick=\"trigger(7)\">Running Arms</button>";
  html += "<script>function trigger(n){fetch('/trigger?anim='+n);}</script>";
  html += "</body></html>";
  server.send(200, "text/html", html);
}

void handleTrigger() {
  if (server.hasArg("anim")) {
    pendingAnimation = server.arg("anim").toInt();
  }
  server.send(200, "text/plain", "ok");
}

void setup() {
  Serial.begin(115200);

  BottangoCore::bottangoSetup();

  WiFi.mode(WIFI_STA);
  esp_wifi_set_protocol(WIFI_IF_STA, WIFI_PROTOCOL_11B | WIFI_PROTOCOL_11G | WIFI_PROTOCOL_11N);
  WiFi.setTxPower(WIFI_POWER_19_5dBm);
  WiFi.begin(ssid, password);

  Serial.print("Connecting to WiFi");

  int attempts = 0;
  while (WiFi.status() != WL_CONNECTED && attempts < 60) {
    delay(500);
    Serial.print(".");
    attempts++;
  }

  if (WiFi.status() == WL_CONNECTED) {
    Serial.println("");
    Serial.println("Connected! IP: ");
    Serial.println(WiFi.localIP());
  } else {
    Serial.println("");
    Serial.print("FAILED. Status: ");
    Serial.println(WiFi.status());
  }

  server.on("/", handleRoot);
  server.on("/trigger", handleTrigger);
  server.begin();
}

void loop() {
  server.handleClient();
  BottangoCore::bottangoLoop();
}