#define RELAY_PIN 26

void setup() {
  Serial.begin(115200);

  pinMode(RELAY_PIN, OUTPUT);
  digitalWrite(RELAY_PIN, HIGH);

  delay(1000);
  Serial.println("RELAY TEST STARTED");
}

void loop() {
  Serial.println("Relay is OFF");
  delay(2000);
}