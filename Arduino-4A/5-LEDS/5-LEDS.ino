int ledRojo = 13;
int ledVerde = 12;
int ledAmarillo = 11;
int ledAzul = 10;
int ledBlanco = 9;

void setup() {
pinMode(ledVerde, OUTPUT);
pinMode(ledAmarillo, OUTPUT);
pinMode(ledRojo, OUTPUT);
pinMode(ledAzul, OUTPUT);
pinMode(ledBlanco, OUTPUT);
}

void loop() {
  digitalWrite(ledRojo, HIGH);
  delay(100);
  digitalWrite(ledAmarillo, HIGH);
  delay(100);
  digitalWrite(ledVerde, HIGH);
  delay(100);
  digitalWrite(ledAzul, HIGH);
  delay(100);
  digitalWrite(ledBlanco, HIGH);
  delay(100);

  digitalWrite(ledBlanco, LOW);
  delay(300);
  digitalWrite(ledAzul, LOW);
  delay(300);
  digitalWrite(ledVerde, LOW);
  delay(300);
  digitalWrite(ledAmarillo, LOW);
  delay(300);
  digitalWrite(ledRojo, LOW);
  delay(300);

}