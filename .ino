#include "BluetoothSerial.h"

BluetoothSerial SerialBT;

void setup() {

  Serial.begin(115200);
  SerialBT.begin("SmartCart");

}

void loop() {

  if (SerialBT.available()) {

    char cmd = SerialBT.read();

    Serial.println(cmd);

    if(cmd == 'F'){
      // Frente
    }

    if(cmd == 'B'){
      // Ré
    }

    if(cmd == 'L'){
      // Esquerda
    }

    if(cmd == 'R'){
      // Direita
    }

    if(cmd == 'S'){
      // Parar
    }

  }

}
