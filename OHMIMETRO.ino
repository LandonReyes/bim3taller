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
#include <LiquidCrystal_I2C.h>
#include <Wire.h> 

LiquidCrystal_I2C LCD_LANDON(0x27,16,2);

int   PIN = 0;
int   Medidor = 0;
int   Vin = 5;
float Vout = 0;
float R2 = 10000;
float R1 = 0;
float Const = 0;

void setup(){
  // Inicializar el LCD
  LCD_LANDON.init();
  //Encender la luz de fondo.
  LCD_LANDON.backlight();
}

void loop(){
  Medidor = analogRead(PIN);
  if(Medidor){
    Const = Medidor * Vin;
    Vout = (Const)/1024.0;
    Const = (Vin/Vout) - 1;
    R1 = R2 * Const;

    LCD_LANDON.setCursor(0,1);
    LCD_LANDON.print("R1=");
    LCD_LANDON.setCursor(3,1);
    LCD_LANDON.print(R1);
    LCD_LANDON.setCursor(0,0);
    LCD_LANDON.print("Vout=");
    LCD_LANDON.setCursor(5,0);
    LCD_LANDON.print(Vout);
    
    delay(500);
  }
}
