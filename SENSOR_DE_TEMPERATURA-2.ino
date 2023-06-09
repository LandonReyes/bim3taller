/*
 * FUNDACIÓN KINAL
 * CENTRO EDUCATIVO TECNICO LABORAL KINAL
 * Electronica
 * Grado: Quinto 
 * Sección: A
 * CURSO: Taller de electronica digital y reparacion de computadoras I
 * LANDON REYES BATEN
 * 2022012
 * Proyecto 1
 */
//Librerias
#include <Ticker.h>  //esta libreria me permite hacer uso del timer
#include <OneWire.h> //libreria para conectar el sensor 
#include <DallasTemperature.h> //libreria que lee la temperatura del sensor 

#define boton 3
int estadoAnterior = HIGH; 
//Directivas de preprocesador para sensor de termperatura
OneWire oneWire(2);  
DallasTemperature sensors(&oneWire);

//Funciones
void temperatura(void);
void push(void);

//Constructores 
Ticker tempAccion(temperatura,3000);
Ticker pushAccion(push,6000);

void setup() {
  Serial.begin(19200);  //Inicio la comunicación serial
  sensors.begin();

  pinMode(3, INPUT);

  tempAccion.start();
  pushAccion.start();
}

void loop() {
  tempAccion.update();
  pushAccion.update();
}

void temperatura(){
sensors.requestTemperatures();   //Se envía el comando para leer la temperatura
int tempC= sensors.getTempCByIndex(0); //Se obtiene la temperatura en ºC
Serial.println("Temperatura en Celcius");
Serial.println(tempC);
}  

void push(){
  int estadoActual = digitalRead(boton);
   if(estadoActual == LOW && estadoAnterior == HIGH){
   Serial.println("boton Abierto");
   }
   if(estadoActual == HIGH && estadoAnterior == LOW){
   Serial.println("boton Cerrado");
   }
   estadoAnterior = estadoActual;
   }
