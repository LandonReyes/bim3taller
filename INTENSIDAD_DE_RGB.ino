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

#define POTENCIOMETRO  A0
#define Red   5
#define Green  6
#define Blue  9

int pyme;
int colores(int R, int G, int B);

void setup() {
  Serial.begin(9600);

  pinMode(Red,OUTPUT);
  pinMode(Blue,OUTPUT);
  pinMode(Green,OUTPUT);

}

void loop() {
  pyme = map(analogRead(POTENCIOMETRO),0,1023,100,1000);
  Serial.println(POTENCIOMETRO);

  colores(174,92,230);
  delay(pyme);

  colores(255,255,255);
  delay(pyme);

  colores(0,255,255);
  delay(pyme);

  colores(189,174,20);
  delay(pyme);

  colores(255,87,35);
  delay(pyme);

}
int colores(int R, int G, int B){
  analogWrite(Red,R);
  analogWrite(Green,G);
  analogWrite(Blue, B);
}
