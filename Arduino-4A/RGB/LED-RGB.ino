int ledrojo = 11;
int ledverde = 10;
int ledazul = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledrojo, OUTPUT);
  pinMode(ledverde, OUTPUT);
  pinMode(ledazul, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledrojo, 0);
  digitalWrite(ledverde, 255);
  digitalWrite(ledazul, 148);
  delay(2000);

  digitalWrite(ledrojo, 0);
  digitalWrite(ledazul, 255);
  digitalWrite(ledverde, 0);
  delay(2000);

  digitalWrite(ledrojo, 0);
  digitalWrite(ledazul, 0);
  digitalWrite(ledverde, 255);
  delay(2000);*/

}