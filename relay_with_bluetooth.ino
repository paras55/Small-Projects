int in1 = 7;
int state = 0;
void setup() {
  pinMode(in1, OUTPUT);
  digitalWrite(in1, HIGH);
  Serial.begin(38400);
}
void loop() {
  if(Serial.available() > 0){ // Checks whether data is comming from the serial port
    state = Serial.read(); // Reads the data from the serial port
 }
 if (state == '0') {
  digitalWrite(in1, LOW); // Turn LED OFF
  Serial.println("LED: OFF"); // Send back, to the phone, the String "LED: ON"
  state = 0;
}
else if (state == '1') {
  digitalWrite(in1, HIGH);
  Serial.println("LED: ON");
  state = 0;
 } }

