void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(A0, INPUT);
  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
}

void loop() {
  digitalWrite(A1, HIGH);
  digitalWrite(A2, LOW);
  delay(1000);
  digitalWrite(A1, LOW);
  digitalWrite(A2, HIGH);
  delay(1000);
}