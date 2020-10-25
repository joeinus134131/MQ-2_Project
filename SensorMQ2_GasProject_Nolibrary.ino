/*
 * Program untuk project pendeteksi asap/kebakaran
 * Direct by : IDNmakerspace Algorithma Factory
 * Last edited : 10/24/2020
 * Reference : Arduino Project Hub/Hackster.io
 */

int sensorA0 = A0;
int sensorbatas = 400;

void setup() 
{
  pinMode(sensorA0, INPUT);
  Serial.begin(9600);
}

void loop() 
{
  int analogSensor = analogRead(sensorA0);
  Serial.print("Data : ");
  Serial.println(analogSensor);
  delay(100);
}
