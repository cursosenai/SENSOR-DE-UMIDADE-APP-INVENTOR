#include <SoftwareSerial.h>

SoftwareSerial bluetooth(2,3);

void setup() {
  Serial.begin(9600);
  Serial.println("teste de DHT");
  bluetooth.begin(9600);
}

void loop() {
  Serial.print("Percentual: ");
  Serial.print(u);
  Serial.println("%");
  Serial.println("Dados Enviado");
  bluetooth.print(u);
  delay(1000);
}
