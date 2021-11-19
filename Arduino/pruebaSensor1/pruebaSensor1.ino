int x = 0;

void setup() {
  
Serial.begin(9600);
}

void loop() {
  x = analogRead(A0);
  Serial.println(x);
  delay(500);
}
