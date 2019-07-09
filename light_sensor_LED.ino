int sensePin=0;
int ledPin=9;
void setup() {
  analogReference(DEFAULT);
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  int val=analogRead(sensePin);
  if(val<400) digitalWrite(ledPin,HIGH);
  else digitalWrite(ledPin,LOW);
  // put your main code here, to run repeatedly:

}
