int motorPin = 9;

void setup() {
  pinMode(motorPin, OUTPUT);
}

void loop() {
  // Motor ON for 3 seconds
  digitalWrite(motorPin, HIGH);
  delay(3000);

  // Motor OFF for 2 seconds
  digitalWrite(motorPin, LOW);
  delay(2000);
}
