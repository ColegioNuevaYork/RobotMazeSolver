// Declaración de librerias principales 
#include<Arduino.h>

#include"AngCalc.h"

// Pines de motor
const int MOTORA_IZQ = 7; // Iquierda A
const int MOTORA_DER = 6; // Izquierda B
const int MOTORB_IZQ = 5; // Derecha A
const int MOTORB_DER = 4; // Derecha B

void setupVehiculo() {
  // Configuración de pines del
  pinMode(MOTORA_IZQ, OUTPUT);
  pinMode(MOTORA_DER, OUTPUT);
  pinMode(MOTORB_IZQ, OUTPUT);
  pinMode(MOTORB_DER, OUTPUT);
}

// Movimiento con dirección frontal
void movAdelante() {
  digitalWrite(MOTORA_IZQ, HIGH);
  digitalWrite(MOTORA_DER, LOW);
  digitalWrite(MOTORB_IZQ, HIGH);
  digitalWrite(MOTORB_DER, LOW);
}

// Movimiento con dirección frontal negativa
void movAtras() {
  digitalWrite(MOTORA_IZQ, LOW);
  digitalWrite(MOTORA_DER, HIGH);
  digitalWrite(MOTORB_IZQ, LOW);
  digitalWrite(MOTORB_DER, HIGH);
}

// Movimiento con dirección oriental
void movDerecha() {
  digitalWrite(MOTORA_IZQ, HIGH);
  digitalWrite(MOTORA_DER, LOW);
  digitalWrite(MOTORB_IZQ, LOW);
  digitalWrite(MOTORB_DER, HIGH);
}

// Movimiento con dirección occidental
void movIzquierda() {
  digitalWrite(MOTORA_IZQ, LOW);
  digitalWrite(MOTORA_DER, HIGH);
  digitalWrite(MOTORB_IZQ, HIGH);
  digitalWrite(MOTORB_DER, LOW);
}

// Detener movimiento
void stopMov() {
  digitalWrite(MOTORA_IZQ, LOW);
  digitalWrite(MOTORA_DER, LOW);
  digitalWrite(MOTORB_IZQ, LOW);
  digitalWrite(MOTORB_DER, LOW);
}









