void setup()

{ pinMode(1,OUTPUT);

pinMode(2,OUTPUT);

pinMode(3,OUTPUT);

pinMode(4,OUTPUT);

pinMode(5,OUTPUT);

pinMode(6,OUTPUT);

pinMode(7,OUTPUT);

pinMode(8,OUTPUT);

pinMode(9,OUTPUT);

pinMode(10,OUTPUT);

pinMode(11,OUTPUT);

pinMode(12,OUTPUT);

} void loop()

{

for (int kat = 10; kat <= 12; kat++)

{ for(int kolon=1; kolon<=9; kolon++)

{digitalWrite(kolon,HIGH);

digitalWrite(kat,HIGH);

delay(50);

digitalWrite(kolon,LOW);

digitalWrite(kat,LOW);

delay(50); }

for (int kat = 10; kat <= 12; kat++)

{ digitalWrite(1,HIGH);

digitalWrite(kat,HIGH);

delay(100);

digitalWrite(1,LOW);

digitalWrite(kat,LOW);

delay(100);

digitalWrite(2,HIGH);

digitalWrite(kat,HIGH);

delay(100);

digitalWrite(2,LOW);

digitalWrite(kat,LOW);

delay(100);

digitalWrite(3,HIGH);

digitalWrite(kat,HIGH);

delay(100);

digitalWrite(3,LOW);

digitalWrite(kat,LOW);

delay(100);

digitalWrite(6,HIGH);

digitalWrite(kat,HIGH);

delay(100);

digitalWrite(6,LOW);

digitalWrite(kat,LOW);

delay(100);

digitalWrite(9,HIGH);

digitalWrite(kat,HIGH);

delay(100);

digitalWrite(9,LOW);

digitalWrite(kat,LOW);

delay(100);

digitalWrite(8,HIGH);

digitalWrite(kat,HIGH);

delay(100);

digitalWrite(8,LOW);

digitalWrite(kat,LOW);

delay(100); 

digitalWrite(7,HIGH);

digitalWrite(kat,HIGH);

delay(100);

digitalWrite(7,LOW);

digitalWrite(kat,LOW);

delay(100);

digitalWrite(4,HIGH);

digitalWrite(kat,HIGH);

delay(100);

digitalWrite(4,LOW);

digitalWrite(kat,LOW);

delay(100);}}}
