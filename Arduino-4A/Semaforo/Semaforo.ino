int ledRojo = 13;
int ledVerde = 12;
int ledAmarillo = 11;

void setup() {
pinMode(ledVerde, OUTPUT);
pinMode(ledAmarillo, OUTPUT);
pinMode(ledRojo, OUTPUT);
}

void loop() {
  digitalWrite(ledVerde, HIGH);
  delay (4000);
  digitalWrite(ledVerde, LOW);
  digitalWrite(ledAmarillo, HIGH);
  delay(3000);
  digitalWrite(ledAmarillo, LOW);
  delay(500);
  digitalWrite(ledAmarillo, HIGH);
  delay(500);
  digitalWrite(ledAmarillo, LOW);
  delay(500);
    digitalWrite(ledAmarillo, HIGH);
  delay(500);
  digitalWrite(ledAmarillo, LOW);
  delay(500);
  digitalWrite(ledRojo, HIGH);
  delay(6000);
  digitalWrite(ledRojo, LOW);

}