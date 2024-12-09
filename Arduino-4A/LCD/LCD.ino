#include <LiquidCrystal.h>
LiquidCrystal lcd(7,6,5,4,3,2);
int LDR = A5;
int valor;
int LED = 13;

void setup() {
lcd.begin(16,2);
  Serial.begin(9600);
  pinMode(LDR, INPUT);
  pinMode(LED, OUTPUT);
}

void loop() {
lcd.setCursor(2,0);
  int valor = analogRead(LDR);
  Serial.println(valor);
  delay(1000);
  if(valor <= 400){
    digitalWrite(LED, LOW);
     lcd.print("Apagado");
  }else{
    digitalWrite(LED, HIGH);
    lcd.print("Encendido");
    lcd.scrollDisplayLeft();
  }
}