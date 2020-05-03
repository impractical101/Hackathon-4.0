void setup() {
  pinMode(2, INPUT); //Pin 2 as INPUT
  pinMode(3, OUTPUT); //PIN 3 as OUTPUT
  Serial.begin(9600);
}
void loop() {
  if (digitalRead(2) == HIGH)
  {
    Serial.println("Motion");
  digitalWrite(3, HIGH);   // turn the LED/Buzz ON
  delay(100);                       // wait for 100 msecond 
  digitalWrite(3, LOW);   // turn the LED/Buzz OFF
  delay(100);                       // wait for 100 msecond 
  }
  else
  {
  Serial.println("No Motion");
  digitalWrite(3, LOW);   // turn the LED/Buzz OFF
  delay(100);
  }
  delay(100);
}
