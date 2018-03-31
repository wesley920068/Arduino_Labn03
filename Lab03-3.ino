double vin;
double analogin = 0;
double analogin1 = 0;
double ResisterValue = 0;
double sensorValue = 0;
double sensorVoltage = 0;
void setup() {
  Serial.begin(9600);
  Serial.println("Hello,World");
  pinMode(14,INPUT);
 
}

void loop() {
 for (byte i=0;i<=5;i++)
  analogin = 0.7* analogin + 0.3* analogRead(A0);
  vin = analogin * 2.5 / 4095;

  for (byte i=0;i<=5;i++)
    sensorValue = 0.7* sensorValue + 0.3* analogRead(A1);
   sensorVoltage = sensorValue * 5 / 4095;  
   analogin1 = analogRead(A1);
    Serial.print(" AnalogRead(A1) = ");
  Serial.print(analogin1);
  Serial.print(" vin =");
  Serial.print(vin);
  Serial.print(" sensorValue =");
  Serial.print(sensorValue);
  Serial.print("  sensorVoltage = ");
  Serial.println(sensorVoltage);
  
  delay(500);

}
