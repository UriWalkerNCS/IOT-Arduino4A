#include <LiquidCrystal.h>
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);
int trig = 13;
int eco = 12;
int led1 = 11;
int led2 = 10;
int led3 = 9;
int led4 = 8;
int led5 = A2;
int led6 = A3;
int buzzer = A1;
long duracion;
int distancia;

void setup() {
  lcd.begin(16, 2);
  pinMode(trig, OUTPUT);
  pinMode(eco, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trig, LOW);
  delay(50); 
  digitalWrite(trig, HIGH);
  delay(10);  
  digitalWrite(trig, LOW);

  duracion = pulseIn(eco, HIGH);
  distancia = duracion / 58.2; 

  Serial.print("Distancia del objeto: ");
  Serial.print(distancia);
  Serial.println(" cm");

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Distancia obj. :");
  lcd.setCursor(0, 1);
  lcd.print(distancia);
  lcd.print(" cm");

  delay(100);  

  if (distancia <= 5) {
    digitalWrite(led6, HIGH);
    tone(buzzer, 600);
  } else {
    digitalWrite(led6, LOW);
    noTone(buzzer);
  }

  if (distancia <= 15) {
    digitalWrite(led5, HIGH);
  } else {
    digitalWrite(led5, LOW);
  }

  if (distancia <= 25) {
    digitalWrite(led4, HIGH);
  } else {
    digitalWrite(led4, LOW);
  }

  if (distancia <= 35) {
    digitalWrite(led3, HIGH);
  } else {
    digitalWrite(led3, LOW);
  }

  if (distancia <= 45) {
    digitalWrite(led2, HIGH);
  } else {
    digitalWrite(led2, LOW);
  }

  if (distancia <= 50) {
    digitalWrite(led1, HIGH);
  } else {
    digitalWrite(led1, LOW);
  }

  delay(100);  
}