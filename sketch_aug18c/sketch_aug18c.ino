#define WATERPIN 8
#define READSOILPIN A0

// higher number is more dry
#define MAXDRYNESS 700

#define WATERDELAY 750
#define WATERPOSTDELAY 5000

int SensorValue;

void setup()
{
  Serial.begin(9600);
  pinMode(READSOILPIN, INPUT);
  pinMode(WATERPIN, OUTPUT);
}

void loop()
{
  SensorValue = analogRead(A0); 
  
  if(SensorValue >= MAXDRYNESS) 
  {
   // if the soil is too dry start watering for 3/4 a second then
   // wait for 5 seconds before monitoring again
   Serial.println("Soil dry start watering");
   Serial.print("Sensor value is : ");
  Serial.println(SensorValue);
  Serial.print("\n");//take a sample
   digitalWrite(WATERPIN, HIGH);
   delay(WATERDELAY);
   
  }
  else 
  {
   Serial.println("Enough Water");
   Serial.print("Sensor value is : ");
  Serial.println(SensorValue); //take a sample
  Serial.print("\n");
   digitalWrite(WATERPIN, LOW);
   delay(WATERPOSTDELAY);
  }
  
  delay(2000);
}
