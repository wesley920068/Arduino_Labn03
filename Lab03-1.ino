byte val;
void setup() {
  Serial.begin(9600);
  Serial.println("Hello,World");
  pinMode(3,OUTPUT);
 
}

void loop() {
  if(Serial.available()){
    val = Serial.read();
    if (val =='1'){
      digitalWrite(3,HIGH);
      Serial.println("LED ON");
    } else if (val =='0') {
      digitalWrite(3,LOW);
      Serial.println("LED OFF");
    }
  }
}
