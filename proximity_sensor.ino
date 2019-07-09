 int pd=2;                      //Photodiode to digital pin 2
 int buzz=13;                   //piezo buzzer to digital pin 13  
 int senRead=0;                 //Readings from sensor to analog pin 0  
 int limit=850;                 //Threshold range of an obstacle  
 void setup()    
 {  
  pinMode(pd,OUTPUT);  
  pinMode(buzz,OUTPUT);  
  digitalWrite(pd,HIGH);       //supply 5 volts to photodiode  
  digitalWrite(buzz,LOW);      //set the buzzer in off mode (initial condition)  
  Serial.begin(9600);          //setting serial monitor at a default baund rate of 9600  
 }  
 void loop()  
 {  
  int val=analogRead(senRead);  //variable to store values from the photodiode  
  Serial.println(val);          // prints the values from the sensor in serial monitor  
  if(val <= limit)              //If obstacle is nearer than the Threshold range  
  {  
   digitalWrite(buzz,HIGH);     // Buzzer will be in ON state  
   delay(20);  
  }  
  else if(val > limit)          //If obstacle is not in Threshold range  
  {  
   digitalWrite(buzz,LOW);      //Buzzer will be in OFF state  
   delay(20);  
  }  
 }  
