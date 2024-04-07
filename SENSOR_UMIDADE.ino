#include <DHT.h>
#include <SoftwareSerial.h>

SoftwareSerial bluetooth(2,3);

#define HT A0
#define TipoDHT DHT11

DHT dht (HT, TipoDHT);

void setup() {
  Serial.begin(9600);
  Serial.println("teste de DHT");
  bluetooth.begin(9600);
  dht.begin(9600);
}

void loop() {
  float u = dht.readHumidity();
  if(isnan(u)){
    Serial.println("erro com DHT");
    return;
  }
  Serial.print("Umidade: ");
  Serial.print(u);
  Serial.println("%");

  Serial.println("Dados Enviado");
  bluetooth.print(u);

  delay(1000);
}