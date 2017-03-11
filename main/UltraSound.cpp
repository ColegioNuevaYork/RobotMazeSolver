#include<Arduino.h>

int dis;

void setupUltra(int echo, int trigger) {
  // Declaración de componentes ultrasonido
  pinMode(echo, INPUT);
  pinMode(trigger, OUTPUT);
}

int getDistance(int echo, int trigger) {
  digitalWrite(trigger, LOW);
  delayMicroseconds(2);
  digitalWrite(trigger, HIGH);
  delayMicroseconds(5);
  digitalWrite(trigger, LOW);
  float timeEcho = pulseIn(echo , HIGH);
  dis = constrain((timeEcho / 58.138), 2, 30);
  // Serial.print("Distancia: ");
  // Serial.println(int(dis));
  return dis;
}
