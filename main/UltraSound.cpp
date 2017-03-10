#include<Arduino.h>

// Declaración de Variables
#define echo 8
#define trigger 9

int dis; 

void setupUltra(){
  // Declaración de componentes ultrasonido
  pinMode(echo, INPUT);
  pinMode(trigger, OUTPUT);
}

int distance(){ 
  digitalWrite(trigger, LOW);
  delayMicroseconds(2);
  digitalWrite(trigger, HIGH);
  delayMicroseconds(5);
  digitalWrite(trigger, LOW);
  float timeEcho = pulseIn(echo , HIGH);
  dis = constrain((timeEcho / 58.138), 2, 30);
  Serial.print("Distancia: ");
  Serial.println(int(dis));
  return dis;
}
