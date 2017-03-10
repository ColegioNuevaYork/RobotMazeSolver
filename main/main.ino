
#include"Algoritmo.h"
#include"AngCalc.h"
#include"Movimiento.h"
#include"UltraSound.h"

// Declaración de variable principales
const int LED = 13;
const int BUT = 12;

void setup() {
  // Configuración inicial del proyecto
  pinMode(LED, OUTPUT);
  pinMode(BUT, INPUT);

  setupUltra();
  Serial.begin(9600);
  // Creación de objeto basado en los atributos y métodos de la clase "AngVel"


}

void loop() {
  int x = distance();
  delay(1000);
}



