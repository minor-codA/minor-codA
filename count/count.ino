uint8_t test_val;
void setup() {
  Serial.begin(9600);
  Serial.print("established Serial");
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  int test_val = 0;
  while (1)
  {
     test_val++;
    Serial.print("test: ");
    Serial.println(test_val);
    delay(1000);
  }


}
