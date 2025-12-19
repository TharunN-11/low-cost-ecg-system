void setup() {
  Serial.begin(9600);
}

void loop() {
  int ecgValue = analogRead(A0);
  Serial.println(ecgValue);
  delay(10);
}
