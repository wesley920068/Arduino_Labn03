double vin;
double analogin = 0;
void setup() {
  Serial.begin(9600);
  Serial.println("Hello,World");
  pinMode(14,INPUT);
 
}

void loop() {
 for (byte i=0;i<=5;i++)
  analogin = 0.7* analogin + 0.3* analogRead(A0);
  vin = analogin * 2.5 / 4095;
  Serial.print("AnalogRead = ");
  Serial.print(analogin);
  Serial.print("vin =");
  Serial.println(vin);
  delay(500);

}
