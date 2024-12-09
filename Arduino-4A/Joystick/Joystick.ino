int y;
  int x;
  void setup (){
    Serial.begin(9600);
    pinMode(9,OUTPUT);
    pinMode(10,OUTPUT);
    pinMode(11,OUTPUT);
    pinMode(12,OUTPUT);
  }


void loop() {
 y = analogRead(A1);
 x = analogRead(A0);
 Serial.print("y=");
 Serial.print(y);
 Serial.print("x=");
 Serial.println(x);
delay(200);

if (x>520){
  digitalWrite(9,HIGH);
}
else 
digitalWrite(9,LOW);

if (x<500){
  digitalWrite(10,HIGH);
}
else 
digitalWrite(10,LOW);

if (y>1020){
  digitalWrite(11,HIGH);
}
else 
digitalWrite(11,LOW);

if (y<500){
  digitalWrite(12,HIGH);
}
else 
digitalWrite(12,LOW);
}