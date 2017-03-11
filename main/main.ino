// Incluir ficheros externos
#include"Algoritmo.h"
#include"AngCalc.h"
#include"Movimiento.h"
#include"UltraSound.h"

// Declaración de variable principales
#define LED               13
#define BUT               12
#define numUltrasound      3

int distanceValues[numUltrasound];

// Declaración de arreglos numéricos constantes - pines
const int echo[] = {
  10, 8, 6
};
const int trigger[] = {
  11, 9, 7
};

void setup() {
  // Configuración inicial del proyecto
  pinMode(LED, OUTPUT);
  pinMode(BUT, INPUT);

  // Configuración de pines de ultrasónidos - Frontal y Laterales
  for (int ultra = 0; ultra < numUltrasound; ultra ++) {
    setupUltra(echo[ultra], trigger[ultra]);
  }

  Serial.begin(9600); // Incialización de comunicación serial a 9600 Baudios
}

void loop() {
  getDistances(); // Convocar la función
  int i = 0;
  for (int ultra = 0; ultra < numUltrasound; ultra ++) {
    if (distanceValues[ultra] <= 15) {
      i++;
    }
  }
  if (i == 3) {
    digitalWrite(LED, HIGH);
    
  } else {
    digitalWrite(LED, LOW);
  }
}

// ----------------------------------------------getDistances function ---------------------------------------------------------------------
void getDistances() {
  for (int ultra = 0; ultra < numUltrasound; ultra ++) {
    distanceValues[ultra] = getDistance(echo[ultra], trigger[ultra]);
  }
}
// ------------------------------------------------turnLeft function -----------------------------------------------------------------------
void turnLeft() {
  movIzquierda();
  delay(angCalc(90)); //  Get rotation time for 90 deg
  stopMov();
}








