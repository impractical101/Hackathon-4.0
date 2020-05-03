void setup() {
  pinMode(2, INPUT); //Pin 2 as INPUT
  pinMode(3, OUTPUT); //PIN 3 as OUTPUT
  Serial.begin(9600);
}
void loop() {
    
    for(int i=0;i<=10;i++)
  {
    Serial.println("Motion");
    digitalWrite(3, HIGH);   // turn the LED/Buzz ON
  delay(100);                       // wait for 100 msecond 
  digitalWrite(3, LOW);   // turn the LED/Buzz OFF
  delay(100);  }                     // wait for 100 msecond 
  Serial.println("No Motion");
  digitalWrite(3, LOW);   // turn the LED/Buzz OFF
  delay(1000000000);
  delay(1000000);
}
