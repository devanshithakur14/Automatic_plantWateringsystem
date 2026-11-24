#define SOIL_SENSOR 34

void setup() {
  Serial.begin(115200);
}

void loop() {
  int moistureValue = analogRead(SOIL_SENSOR);

  String status;

  if (moistureValue > 2500) {
    status = "DRY";
  } else {
    status = "WET";
  }

  Serial.print("Soil Reading: ");
  Serial.print(moistureValue);

  Serial.print(" | Status: ");
  Serial.println(status);

  delay(1000);
}