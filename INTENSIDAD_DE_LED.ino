/*
 * FUNDACIÓN KINAL
 * CENTRO EDUCATIVO TECNICO LABORAL KINAL
 * Electronica
 * Grado: Quinto 
 * Sección: A
 * CURSO: Taller de electronica digital y reparacion de computadoras I
 * LANDON REYES BATEN
 * 2022012
 */

const int led = 3;
const int pot = 0;
int brillo;

void setup(){
  
pinMode(led, OUTPUT);
}

void loop(){


brillo = analogRead(pot) / 4; 
analogWrite(led, brillo);

}
