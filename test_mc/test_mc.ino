void setup() {
  Serial.begin(115200);
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.println("serial has started");
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);
  Serial.println("led power on");
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);
  Serial.println("led power off");
  // put your main code here, to run repeatedly:

}
