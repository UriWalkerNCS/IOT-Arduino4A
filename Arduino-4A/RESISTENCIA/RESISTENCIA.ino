int LDR = A5;
int valor;
int LED = 8;

void setup() {
  Serial.begin(9600);
  pinMode(LDR, INPUT);
  pinMode(LED, OUTPUT);

}

void loop() {
  digitalWrite(LED, HIGH);
  int valor = analogRead(LDR);
  Serial.println(valor);
  delay(1000);
  if(valor <= 400){
    digitalWrite(LED, LOW);
  }else{
    digitalWrite(LED, HIGH);
  }
}