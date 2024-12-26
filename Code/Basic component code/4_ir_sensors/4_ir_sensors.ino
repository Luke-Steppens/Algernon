int ldr1 = 26;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(ldr1, INPUT);
  Serial.begin(9600);
}

void loop() {
  int raw_value = 0;
  raw_value = analogRead(ldr1);
  int scaled_value = map(raw_value, 0, 1023, 0, 255);
  analogWrite(LED_BUILTIN, scaled_value);
  Serial.println(raw_value);
  delay(10);
}
