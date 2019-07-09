void setup() {
  for(int pin=2; pin<12; pin++){
    pinMode(pin,OUTPUT);
  }
}

void loop() {
  int t = 20;
  for(int i=2; i<12; i++){
    digitalWrite(i,HIGH);
    delay(t);
    digitalWrite(i+1,HIGH);
    delay(t);
    digitalWrite(i,LOW);
    delay(t);
    digitalWrite(i+1,LOW);
    delay(t);
  }
  for(int i=12; i>1; i--){
    digitalWrite(i,HIGH);
    delay(t);
    digitalWrite(i-1,HIGH);
    delay(t);
    digitalWrite(i,LOW);
    delay(t);
    digitalWrite(i-1,LOW);
    delay(t);
  }
}
