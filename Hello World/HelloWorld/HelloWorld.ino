void setup() {
  // put your setup code here, to run once:
  pinMode(D4 , OUTPUT);
  pinMode(D2 , OUTPUT);

}

void loop() {
  
  digitalWrite(D4,HIGH);
  delay(1000)
  digitalWrite(D4,LOW);
  digitalWrite(D2,HIGH);
  delay(1000)
  digitalWrite(D4,LOW);
  
  // put your main code here, to run repeatedly:


}
