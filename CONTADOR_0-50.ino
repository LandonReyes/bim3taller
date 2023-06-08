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
//definición de los pines 
#define btn_rising  2    
#define btn_falling 3 
#define A1 4
#define B1 5
#define C1 6
#define D1 7
#define E1 8
#define F1 9
#define G1 10
#define A2 11
#define B2 12
#define C2 13
#define D2 14
#define E2 15
#define F2 16
#define G2 17
void funcion_ISR_falling(void);
void funcion_ISR_rising(void);
volatile static bool f_print=false; // variable para mostrar en texto en el loop
volatile static char i=0; // variable que cuenta de 0 - 255;
void setup() {
  Serial.begin(19200); //Inicio la comunicación serial
  pinMode(btn_rising, INPUT);  //pin 2 como entrada
  pinMode(btn_falling, INPUT); //pin 3 como entrada
  pinMode(A1, OUTPUT);
  pinMode(B1, OUTPUT);
  pinMode(C1, OUTPUT);
  pinMode(D1, OUTPUT);
  pinMode(E1, OUTPUT);
  pinMode(F1, OUTPUT);
  pinMode(G1, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(B2, OUTPUT);
  pinMode(C2, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(E2, OUTPUT);
  pinMode(F2, OUTPUT);
  pinMode(G2, OUTPUT);
  attachInterrupt(digitalPinToInterrupt(btn_rising),funcion_ISR_rising,RISING);   //Anclar la interrupción del pin 2 a una funcion de ISR, disparada por el flanco ascendente
  attachInterrupt(digitalPinToInterrupt(btn_falling),funcion_ISR_falling,FALLING); //Anclar la interrupción del pin 3 a una funcion de ISR, disparada por el flanco descendente
}
void loop() {
   numeros_0_al_50 ();

if(f_print)
{
  f_print = false; //limpio la variable
  Serial.println(i); //imprimo el valor de I
}
  if(i<50) 
{
  i==0;
}
  if(i>0)
{
  i==50;
}
if(i>50)
  {
  i=0;
  }
if(i<0)
  i=50;
}
//Funciones de ISR
void funcion_ISR_rising(void)
{
  f_print = true;
  //aumentar el valor de la variable
  i++; 
  //Serial.println(i);
}
void funcion_ISR_falling(void)
{
  f_print = true;
  //disminuir el valor de una variable
  i--;
  //Serial.println(i);
}
//seleccionamos los numeros del 0-50

void numeros_0_al_50 ()
{  
  if(i==0)
  {   
 
  digitalWrite(A1, HIGH);
  digitalWrite(B1, HIGH);
  digitalWrite(C1, HIGH);
  digitalWrite(D1, HIGH);
  digitalWrite(E1, HIGH);
  digitalWrite(F1, HIGH);
  digitalWrite(G1, LOW);
  digitalWrite(A2, HIGH);
  digitalWrite(B2, HIGH);
  digitalWrite(C2, HIGH);
  digitalWrite(D2, HIGH);
  digitalWrite(E2, HIGH);
  digitalWrite(F2, HIGH);
  digitalWrite(G2, LOW);
}
if(i==1)
{
 
  digitalWrite(A1, HIGH);
  digitalWrite(B1, HIGH);
  digitalWrite(C1, HIGH);
  digitalWrite(D1, HIGH);
  digitalWrite(E1, HIGH);
  digitalWrite(F1, HIGH);
  digitalWrite(G1, LOW);
 
  
  digitalWrite(A2, LOW);
  digitalWrite(B2, HIGH);
  digitalWrite(C2, HIGH);
  digitalWrite(D2, LOW);
  digitalWrite(E2, LOW);
  digitalWrite(F2, LOW);
  digitalWrite(G2, LOW);
}
if(i==2)
{
 
  digitalWrite(A1, HIGH);
  digitalWrite(B1, HIGH);
  digitalWrite(C1, HIGH);
  digitalWrite(D1, HIGH);
  digitalWrite(E1, HIGH);
  digitalWrite(F1, HIGH);
  digitalWrite(G1, LOW);
 
  digitalWrite(A2, HIGH);
  digitalWrite(B2, HIGH);
  digitalWrite(C2, LOW);
  digitalWrite(D2, HIGH);
  digitalWrite(E2, HIGH);
  digitalWrite(F2, LOW);
  digitalWrite(G2, HIGH);
}
if(i==3)
{
 
  digitalWrite(A1, HIGH);
  digitalWrite(B1, HIGH);
  digitalWrite(C1, HIGH);
  digitalWrite(D1, HIGH);
  digitalWrite(E1, HIGH);
  digitalWrite(F1, HIGH);
  digitalWrite(G1, LOW);
 
  digitalWrite(A2, HIGH);
  digitalWrite(B2, HIGH);
  digitalWrite(C2, HIGH);
  digitalWrite(D2, HIGH);
  digitalWrite(E2, LOW);
  digitalWrite(F2, LOW);
  digitalWrite(G2, HIGH);
}
if(i==4)
{
 
  digitalWrite(A1, HIGH);
  digitalWrite(B1, HIGH);
  digitalWrite(C1, HIGH);
  digitalWrite(D1, HIGH);
  digitalWrite(E1, HIGH);
  digitalWrite(F1, HIGH);
  digitalWrite(G1, LOW);
  digitalWrite(A2, LOW);
  digitalWrite(B2, HIGH);
  digitalWrite(C2, HIGH);
  digitalWrite(D2, LOW);
  digitalWrite(E2, LOW);
  digitalWrite(F2, HIGH);
  digitalWrite(G2, HIGH);
}
if(i==5)
{
 
  digitalWrite(A1, HIGH);
  digitalWrite(B1, HIGH);
  digitalWrite(C1, HIGH);
  digitalWrite(D1, HIGH);
  digitalWrite(E1, HIGH);
  digitalWrite(F1, HIGH);
  digitalWrite(G1, LOW);
 
  digitalWrite(A2, HIGH);
  digitalWrite(B2, LOW);
  digitalWrite(C2, HIGH);
  digitalWrite(D2, HIGH);
  digitalWrite(E2, LOW);
  digitalWrite(F2, HIGH);
  digitalWrite(G2, HIGH);
}
if(i==6)
{
 
  digitalWrite(A1, HIGH);
  digitalWrite(B1, HIGH);
  digitalWrite(C1, HIGH);
  digitalWrite(D1, HIGH);
  digitalWrite(E1, HIGH);
  digitalWrite(F1, HIGH);
  digitalWrite(G1, LOW);
 
  digitalWrite(A2, HIGH);
  digitalWrite(B2, LOW);
  digitalWrite(C2, HIGH);
  digitalWrite(D2, HIGH);
  digitalWrite(E2, HIGH);
  digitalWrite(F2, HIGH);
  digitalWrite(G2, HIGH);
}
if(i==7)
{
 
  digitalWrite(A1, HIGH);
  digitalWrite(B1, HIGH);
  digitalWrite(C1, HIGH);
  digitalWrite(D1, HIGH);
  digitalWrite(E1, HIGH);
  digitalWrite(F1, HIGH);
  digitalWrite(G1, LOW);
 
  digitalWrite(A2, HIGH);
  digitalWrite(B2, HIGH);
  digitalWrite(C2, HIGH);
  digitalWrite(D2, LOW);
  digitalWrite(E2, LOW);
  digitalWrite(F2, LOW);
  digitalWrite(G2, LOW);
}
if(i==8)
{
 
  digitalWrite(A1, HIGH);
  digitalWrite(B1, HIGH);
  digitalWrite(C1, HIGH);
  digitalWrite(D1, HIGH);
  digitalWrite(E1, HIGH);
  digitalWrite(F1, HIGH);
  digitalWrite(G1, LOW);
 
  digitalWrite(A2, HIGH);
  digitalWrite(B2, HIGH);
  digitalWrite(C2, HIGH);
  digitalWrite(D2, HIGH);
  digitalWrite(E2, HIGH);
  digitalWrite(F2, HIGH);
  digitalWrite(G2, HIGH);
}
if(i==9)
{
 
  digitalWrite(A1, HIGH);
  digitalWrite(B1, HIGH);
  digitalWrite(C1, HIGH);
  digitalWrite(D1, HIGH);
  digitalWrite(E1, HIGH);
  digitalWrite(F1, HIGH);
  digitalWrite(G1, LOW);
 
  digitalWrite(A2, HIGH);
  digitalWrite(B2, HIGH);
  digitalWrite(C2, HIGH);
  digitalWrite(D2, HIGH);
  digitalWrite(E2, LOW);
  digitalWrite(F2, HIGH);
  digitalWrite(G2, HIGH);
}
if(i==10)
{
 
  digitalWrite(A1, LOW);
  digitalWrite(B1, HIGH);
  digitalWrite(C1, HIGH);
  digitalWrite(D1, LOW);
  digitalWrite(E1, LOW);
  digitalWrite(F1, LOW);
  digitalWrite(G1, LOW);
 
  digitalWrite(A2, HIGH);
  digitalWrite(B2, HIGH);
  digitalWrite(C2, HIGH);
  digitalWrite(D2, HIGH);
  digitalWrite(E2, HIGH);
  digitalWrite(F2, HIGH);
  digitalWrite(G2, LOW);
}
if(i==11)
{
 
  digitalWrite(A1, LOW);
  digitalWrite(B1, HIGH);
  digitalWrite(C1, HIGH);
  digitalWrite(D1, LOW);
  digitalWrite(E1, LOW);
  digitalWrite(F1, LOW);
  digitalWrite(G1, LOW);
 
  digitalWrite(A2, LOW);
  digitalWrite(B2, HIGH);
  digitalWrite(C2, HIGH);
  digitalWrite(D2, LOW);
  digitalWrite(E2, LOW);
  digitalWrite(F2, LOW);
  digitalWrite(G2, LOW);
}
if(i==12)
{
 
  digitalWrite(A1, LOW);
  digitalWrite(B1, HIGH);
  digitalWrite(C1, HIGH);
  digitalWrite(D1, LOW);
  digitalWrite(E1, LOW);
  digitalWrite(F1, LOW);
  digitalWrite(G1, LOW);
 
  digitalWrite(A2, HIGH);
  digitalWrite(B2, HIGH);
  digitalWrite(C2, LOW);
  digitalWrite(D2, HIGH);
  digitalWrite(E2, HIGH);
  digitalWrite(F2, LOW);
  digitalWrite(G2, HIGH);
}
if(i==13)
{
 
  digitalWrite(A1, LOW);
  digitalWrite(B1, HIGH);
  digitalWrite(C1, HIGH);
  digitalWrite(D1, LOW);
  digitalWrite(E1, LOW);
  digitalWrite(F1, LOW);
  digitalWrite(G1, LOW);
 
  digitalWrite(A2, HIGH);
  digitalWrite(B2, HIGH);
  digitalWrite(C2, HIGH);
  digitalWrite(D2, HIGH);
  digitalWrite(E2, LOW);
  digitalWrite(F2, LOW);
  digitalWrite(G2, HIGH);
}
if(i==14)
{
 
  digitalWrite(A1, LOW);
  digitalWrite(B1, HIGH);
  digitalWrite(C1, HIGH);
  digitalWrite(D1, LOW);
  digitalWrite(E1, LOW);
  digitalWrite(F1, LOW);
  digitalWrite(G1, LOW);
 
  digitalWrite(A2, LOW);
  digitalWrite(B2, HIGH);
  digitalWrite(C2, HIGH);
  digitalWrite(D2, LOW);
  digitalWrite(E2, LOW);
  digitalWrite(F2, HIGH);
  digitalWrite(G2, HIGH);
}
if(i==15)
{
 
  digitalWrite(A1, LOW);
  digitalWrite(B1, HIGH);
  digitalWrite(C1, HIGH);
  digitalWrite(D1, LOW);
  digitalWrite(E1, LOW);
  digitalWrite(F1, LOW);
  digitalWrite(G1, LOW);
 
  digitalWrite(A2, HIGH);
  digitalWrite(B2, LOW);
  digitalWrite(C2, HIGH);
  digitalWrite(D2, HIGH);
  digitalWrite(E2, LOW);
  digitalWrite(F2, HIGH);
  digitalWrite(G2, HIGH);
}
if(i==16)
{
 
  digitalWrite(A1, LOW);
  digitalWrite(B1, HIGH);
  digitalWrite(C1, HIGH);
  digitalWrite(D1, LOW);
  digitalWrite(E1, LOW);
  digitalWrite(F1, LOW);
  digitalWrite(G1, LOW);
 
  digitalWrite(A2, HIGH);
  digitalWrite(B2, LOW);
  digitalWrite(C2, HIGH);
  digitalWrite(D2, HIGH);
  digitalWrite(E2, HIGH);
  digitalWrite(F2, HIGH);
  digitalWrite(G2, HIGH);
}
if(i==17)
{
 
  digitalWrite(A1, LOW);
  digitalWrite(B1, HIGH);
  digitalWrite(C1, HIGH);
  digitalWrite(D1, LOW);
  digitalWrite(E1, LOW);
  digitalWrite(F1, LOW);
  digitalWrite(G1, LOW);
 
  digitalWrite(A2, HIGH);
  digitalWrite(B2, HIGH);
  digitalWrite(C2, HIGH);
  digitalWrite(D2, LOW);
  digitalWrite(E2, LOW);
  digitalWrite(F2, LOW);
  digitalWrite(G2, LOW);
}
if(i==18)
{
 
  digitalWrite(A1, LOW);
  digitalWrite(B1, HIGH);
  digitalWrite(C1, HIGH);
  digitalWrite(D1, LOW);
  digitalWrite(E1, LOW);
  digitalWrite(F1, LOW);
  digitalWrite(G1, LOW);
 
  digitalWrite(A2, HIGH);
  digitalWrite(B2, HIGH);
  digitalWrite(C2, HIGH);
  digitalWrite(D2, HIGH);
  digitalWrite(E2, HIGH);
  digitalWrite(F2, HIGH);
  digitalWrite(G2, HIGH);
}
if(i==19)
{
 
  digitalWrite(A1, LOW);
  digitalWrite(B1, HIGH);
  digitalWrite(C1, HIGH);
  digitalWrite(D1, LOW);
  digitalWrite(E1, LOW);
  digitalWrite(F1, LOW);
  digitalWrite(G1, LOW);
 
  digitalWrite(A2, HIGH);
  digitalWrite(B2, HIGH);
  digitalWrite(C2, HIGH);
  digitalWrite(D2, LOW);
  digitalWrite(E2, LOW);
  digitalWrite(F2, HIGH);
  digitalWrite(G2, HIGH);
}
if(i==20)
{
 
  digitalWrite(A1, HIGH);
  digitalWrite(B1, HIGH);
  digitalWrite(C1, LOW);
  digitalWrite(D1, HIGH);
  digitalWrite(E1, HIGH);
  digitalWrite(F1, LOW);
  digitalWrite(G1, HIGH);
 
  digitalWrite(A2, HIGH);
  digitalWrite(B2, HIGH);
  digitalWrite(C2, HIGH);
  digitalWrite(D2, HIGH);
  digitalWrite(E2, HIGH);
  digitalWrite(F2, HIGH);
  digitalWrite(G2, LOW);
}
if(i==21)
{
 
  digitalWrite(A1, HIGH);
  digitalWrite(B1, HIGH);
  digitalWrite(C1, LOW);
  digitalWrite(D1, HIGH);
  digitalWrite(E1, HIGH);
  digitalWrite(F1, LOW);
  digitalWrite(G1, HIGH);
 
  digitalWrite(A2, LOW);
  digitalWrite(B2, HIGH);
  digitalWrite(C2, HIGH);
  digitalWrite(D2, LOW);
  digitalWrite(E2, LOW);
  digitalWrite(F2, LOW);
  digitalWrite(G2, LOW);
}
if(i==22)
{
 
  digitalWrite(A1, HIGH);
  digitalWrite(B1, HIGH);
  digitalWrite(C1, LOW);
  digitalWrite(D1, HIGH);
  digitalWrite(E1, HIGH);
  digitalWrite(F1, LOW);
  digitalWrite(G1, HIGH);
 
  digitalWrite(A2, HIGH);
  digitalWrite(B2, HIGH);
  digitalWrite(C2, LOW);
  digitalWrite(D2, HIGH);
  digitalWrite(E2, HIGH);
  digitalWrite(F2, LOW);
  digitalWrite(G2, HIGH);
}
if(i==23)
{
 
  digitalWrite(A1, HIGH);
  digitalWrite(B1, HIGH);
  digitalWrite(C1, LOW);
  digitalWrite(D1, HIGH);
  digitalWrite(E1, HIGH);
  digitalWrite(F1, LOW);
  digitalWrite(G1, HIGH);
 
  digitalWrite(A2, HIGH);
  digitalWrite(B2, HIGH);
  digitalWrite(C2, HIGH);
  digitalWrite(D2, HIGH);
  digitalWrite(E2, LOW);
  digitalWrite(F2, LOW);
  digitalWrite(G2, HIGH);
}
if(i==24)
{
 
  digitalWrite(A1, HIGH);
  digitalWrite(B1, HIGH);
  digitalWrite(C1, LOW);
  digitalWrite(D1, HIGH);
  digitalWrite(E1, HIGH);
  digitalWrite(F1, LOW);
  digitalWrite(G1, HIGH);
 
  digitalWrite(A2, LOW);
  digitalWrite(B2, HIGH);
  digitalWrite(C2, HIGH);
  digitalWrite(D2, LOW);
  digitalWrite(E2, LOW);
  digitalWrite(F2, HIGH);
  digitalWrite(G2, HIGH);
}
if(i==25)
{
 
  digitalWrite(A1, HIGH);
  digitalWrite(B1, HIGH);
  digitalWrite(C1, LOW);
  digitalWrite(D1, HIGH);
  digitalWrite(E1, HIGH);
  digitalWrite(F1, LOW);
  digitalWrite(G1, HIGH);
 
  digitalWrite(A2, HIGH);
  digitalWrite(B2, LOW);
  digitalWrite(C2, HIGH);
  digitalWrite(D2, HIGH);
  digitalWrite(E2, LOW);
  digitalWrite(F2, HIGH);
  digitalWrite(G2, HIGH);
}
if(i==26)
{
 
  digitalWrite(A1, HIGH);
  digitalWrite(B1, HIGH);
  digitalWrite(C1, LOW);
  digitalWrite(D1, HIGH);
  digitalWrite(E1, HIGH);
  digitalWrite(F1, LOW);
  digitalWrite(G1, HIGH);
 
  digitalWrite(A2, HIGH);
  digitalWrite(B2, LOW);
  digitalWrite(C2, HIGH);
  digitalWrite(D2, HIGH);
  digitalWrite(E2, HIGH);
  digitalWrite(F2, HIGH);
  digitalWrite(G2, HIGH);
}
if(i==27)
{
 
  digitalWrite(A1, HIGH);
  digitalWrite(B1, HIGH);
  digitalWrite(C1, LOW);
  digitalWrite(D1, HIGH);
  digitalWrite(E1, HIGH);
  digitalWrite(F1, LOW);
  digitalWrite(G1, HIGH);
 
  digitalWrite(A2, HIGH);
  digitalWrite(B2, HIGH);
  digitalWrite(C2, HIGH);
  digitalWrite(D2, LOW);
  digitalWrite(E2, LOW);
  digitalWrite(F2, LOW);
  digitalWrite(G2, LOW);
}
if(i==28)
{
 
  digitalWrite(A1, HIGH);
  digitalWrite(A1, HIGH);
  digitalWrite(B1, HIGH);
  digitalWrite(C1, LOW);
  digitalWrite(D1, HIGH);
  digitalWrite(E1, HIGH);
  digitalWrite(F1, LOW);
  digitalWrite(G1, HIGH);
 
  digitalWrite(A2, HIGH);
  digitalWrite(B2, HIGH);
  digitalWrite(C2, HIGH);
  digitalWrite(D2, HIGH);
  digitalWrite(E2, HIGH);
  digitalWrite(F2, HIGH);
  digitalWrite(G2, HIGH);
}
if(i==29)
{
 
  digitalWrite(A1, HIGH);
  digitalWrite(B1, HIGH);
  digitalWrite(C1, LOW);
  digitalWrite(D1, HIGH);
  digitalWrite(E1, HIGH);
  digitalWrite(F1, LOW);
  digitalWrite(G1, HIGH);
 ;
  digitalWrite(A2, HIGH);
  digitalWrite(B2, HIGH);
  digitalWrite(C2, HIGH);
  digitalWrite(D2, LOW);
  digitalWrite(E2, LOW);
  digitalWrite(F2, HIGH);
  digitalWrite(G2, HIGH);
}
if(i==30)
{
 
  digitalWrite(A1, HIGH);
  digitalWrite(B1, HIGH);
  digitalWrite(C1, HIGH);
  digitalWrite(D1, HIGH);
  digitalWrite(E1, LOW);
  digitalWrite(F1, LOW);
  digitalWrite(G1, HIGH);
 
  digitalWrite(A2, HIGH);
  digitalWrite(B2, HIGH);
  digitalWrite(C2, HIGH);
  digitalWrite(D2, HIGH);
  digitalWrite(E2, HIGH);
  digitalWrite(F2, HIGH);
  digitalWrite(G2, LOW);
}
if(i==31)
{
 
  digitalWrite(A1, HIGH);
  digitalWrite(B1, HIGH);
  digitalWrite(C1, HIGH);
  digitalWrite(D1, HIGH);
  digitalWrite(E1, LOW);
  digitalWrite(F1, LOW);
  digitalWrite(G1, HIGH);
 
  digitalWrite(A2, LOW);
  digitalWrite(B2, HIGH);
  digitalWrite(C2, HIGH);
  digitalWrite(D2, LOW);
  digitalWrite(E2, LOW);
  digitalWrite(F2, LOW);
  digitalWrite(G2, LOW);
}
if(i==32)
{
 
  digitalWrite(A1, HIGH);
  digitalWrite(B1, HIGH);
  digitalWrite(C1, HIGH);
  digitalWrite(D1, HIGH);
  digitalWrite(E1, LOW);
  digitalWrite(F1, LOW);
  digitalWrite(G1, HIGH);
 
  digitalWrite(A2, HIGH);
  digitalWrite(B2, HIGH);
  digitalWrite(C2, LOW);
  digitalWrite(D2, HIGH);
  digitalWrite(E2, HIGH);
  digitalWrite(F2, LOW);
  digitalWrite(G2, HIGH);
}
if(i==33)
{
 
  digitalWrite(A1, HIGH);
  digitalWrite(B1, HIGH);
  digitalWrite(C1, HIGH);
  digitalWrite(D1, HIGH);
  digitalWrite(E1, LOW);
  digitalWrite(F1, LOW);
  digitalWrite(G1, HIGH);
 ;
  digitalWrite(A2, HIGH);
  digitalWrite(B2, HIGH);
  digitalWrite(C2, HIGH);
  digitalWrite(D2, HIGH);
  digitalWrite(E2, LOW);
  digitalWrite(F2, LOW);
  digitalWrite(G2, HIGH);
}
if(i==34)
{
 
  digitalWrite(A1, HIGH);
  digitalWrite(B1, HIGH);
  digitalWrite(C1, HIGH);
  digitalWrite(D1, HIGH);
  digitalWrite(E1, LOW);
  digitalWrite(F1, LOW);
  digitalWrite(G1, HIGH);
 
  digitalWrite(A2, LOW);
  digitalWrite(B2, HIGH);
  digitalWrite(C2, HIGH);
  digitalWrite(D2, LOW);
  digitalWrite(E2, LOW);
  digitalWrite(F2, HIGH);
  digitalWrite(G2, HIGH);
}
if(i==35) 
{
 
  digitalWrite(A1, HIGH);
  digitalWrite(B1, HIGH);
  digitalWrite(C1, HIGH);
  digitalWrite(D1, HIGH);
  digitalWrite(E1, LOW);
  digitalWrite(F1, LOW);
  digitalWrite(G1, HIGH);
 
  digitalWrite(A2, HIGH);
  digitalWrite(B2, LOW);
  digitalWrite(C2, HIGH);
  digitalWrite(D2, HIGH);
  digitalWrite(E2, LOW);
  digitalWrite(F2, HIGH);
  digitalWrite(G2, HIGH);
}
if(i==36)
{
 
  digitalWrite(A1, HIGH);
  digitalWrite(B1, HIGH);
  digitalWrite(C1, HIGH);
  digitalWrite(D1, HIGH);
  digitalWrite(E1, LOW);
  digitalWrite(F1, LOW);
  digitalWrite(G1, HIGH);
 ;;
  digitalWrite(A2, HIGH);
  digitalWrite(B2, LOW);
  digitalWrite(C2, HIGH);
  digitalWrite(D2, HIGH);
  digitalWrite(E2, HIGH);
  digitalWrite(F2, HIGH);
  digitalWrite(G2, HIGH);
}
if(i==37)
{
 
  digitalWrite(A1, HIGH);
  digitalWrite(B1, HIGH);
  digitalWrite(C1, HIGH);
  digitalWrite(D1, HIGH);
  digitalWrite(E1, LOW);
  digitalWrite(F1, LOW);
  digitalWrite(G1, HIGH);
 
  digitalWrite(A2, HIGH);
  digitalWrite(B2, HIGH);
  digitalWrite(C2, HIGH);
  digitalWrite(D2, LOW);
  digitalWrite(E2, LOW);
  digitalWrite(F2, LOW);
  digitalWrite(G2, LOW);
}
if(i==38){
 
  digitalWrite(A1, HIGH);
  digitalWrite(B1, HIGH);
  digitalWrite(C1, HIGH);
  digitalWrite(D1, HIGH);
  digitalWrite(E1, LOW);
  digitalWrite(F1, LOW);
  digitalWrite(G1, HIGH);
 
  digitalWrite(A2, HIGH);
  digitalWrite(B2, HIGH);
  digitalWrite(C2, HIGH);
  digitalWrite(D2, HIGH);
  digitalWrite(E2, HIGH);
  digitalWrite(F2, HIGH);
  digitalWrite(G2, HIGH);
}
if(i==39)
{
 
  digitalWrite(A1, HIGH);
  digitalWrite(B1, HIGH);
  digitalWrite(C1, HIGH);
  digitalWrite(D1, HIGH);
  digitalWrite(E1, LOW);
  digitalWrite(F1, LOW);
  digitalWrite(G1, HIGH);
 
  digitalWrite(A2, HIGH);
  digitalWrite(B2, HIGH);
  digitalWrite(C2, HIGH);
  digitalWrite(D2, LOW);
  digitalWrite(E2, LOW);
  digitalWrite(F2, HIGH);
  digitalWrite(G2, HIGH);
}
if(i==40){
 
  digitalWrite(A1, LOW);
  digitalWrite(B1, HIGH);
  digitalWrite(C1, HIGH);
  digitalWrite(D1, LOW);
  digitalWrite(E1, LOW);
  digitalWrite(F1, HIGH);
  digitalWrite(G1, HIGH);
 
  digitalWrite(A2, HIGH);
  digitalWrite(B2, HIGH);
  digitalWrite(C2, HIGH);
  digitalWrite(D2, HIGH);
  digitalWrite(E2, HIGH);
  digitalWrite(F2, HIGH);
  digitalWrite(G2, LOW);
}
if(i==41){
 
  digitalWrite(A1, LOW);
  digitalWrite(B1, HIGH);
  digitalWrite(C1, HIGH);
  digitalWrite(D1, LOW);
  digitalWrite(E1, LOW);
  digitalWrite(F1, HIGH);
  digitalWrite(G1, HIGH);
 
  digitalWrite(A2, LOW);
  digitalWrite(B2, HIGH);
  digitalWrite(C2, HIGH);
  digitalWrite(D2, LOW);
  digitalWrite(E2, LOW);
  digitalWrite(F2, LOW);
  digitalWrite(G2, LOW);
}
if(i==42)
{
 
  digitalWrite(A1, LOW);
  digitalWrite(B1, HIGH);
  digitalWrite(C1, HIGH);
  digitalWrite(D1, LOW);
  digitalWrite(E1, LOW);
  digitalWrite(F1, HIGH);
  digitalWrite(G1, HIGH);
 
  digitalWrite(A2, HIGH);
  digitalWrite(B2, HIGH);
  digitalWrite(C2, LOW);
  digitalWrite(D2, HIGH);
  digitalWrite(E2, HIGH);
  digitalWrite(F2, LOW);
  digitalWrite(G2, HIGH);
}
if(i==43){
 
  digitalWrite(A1, LOW);
  digitalWrite(B1, HIGH);
  digitalWrite(C1, HIGH);
  digitalWrite(D1, LOW);
  digitalWrite(E1, LOW);
  digitalWrite(F1, HIGH);
  digitalWrite(G1, HIGH);
 
  digitalWrite(A2, HIGH);
  digitalWrite(B2, HIGH);
  digitalWrite(C2, HIGH);
  digitalWrite(D2, HIGH);
  digitalWrite(E2, LOW);
  digitalWrite(F2, LOW);
  digitalWrite(G2, HIGH);
}
if(i==44){
 
  digitalWrite(A1, LOW);
  digitalWrite(B1, HIGH);
  digitalWrite(C1, HIGH);
  digitalWrite(D1, LOW);
  digitalWrite(E1, LOW);
  digitalWrite(F1, HIGH);
  digitalWrite(G1, HIGH);
 
  digitalWrite(A2, LOW);
  digitalWrite(B2, HIGH);
  digitalWrite(C2, HIGH);
  digitalWrite(D2, LOW);
  digitalWrite(E2, LOW);
  digitalWrite(F2, HIGH);
  digitalWrite(G2, HIGH);
}
if(i==45){
 
  digitalWrite(A1, LOW);
  digitalWrite(B1, HIGH);
  digitalWrite(C1, HIGH);
  digitalWrite(D1, LOW);
  digitalWrite(E1, LOW);
  digitalWrite(F1, HIGH);
  digitalWrite(G1, HIGH);
 
  digitalWrite(A2, HIGH);
  digitalWrite(B2, LOW);
  digitalWrite(C2, HIGH);
  digitalWrite(D2, HIGH);
  digitalWrite(E2, LOW);
  digitalWrite(F2, HIGH);
  digitalWrite(G2, HIGH);
}
if(i==46){
 
  digitalWrite(A1, LOW);
  digitalWrite(B1, HIGH);
  digitalWrite(C1, HIGH);
  digitalWrite(D1, LOW);
  digitalWrite(E1, LOW);
  digitalWrite(F1, HIGH);
  digitalWrite(G1, HIGH);
 
  digitalWrite(A2, HIGH);
  digitalWrite(B2, LOW);
  digitalWrite(C2, HIGH);
  digitalWrite(D2, HIGH);
  digitalWrite(E2, HIGH);
  digitalWrite(F2, HIGH);
  digitalWrite(G2, HIGH);
}
if(i==47){
 
  digitalWrite(A1, LOW);
  digitalWrite(B1, HIGH);
  digitalWrite(C1, HIGH);
  digitalWrite(D1, LOW);
  digitalWrite(E1, LOW);
  digitalWrite(F1, HIGH);
  digitalWrite(G1, HIGH):
  digitalWrite(A2, HIGH);
  digitalWrite(B2, HIGH);
  digitalWrite(C2, HIGH);
  digitalWrite(D2, LOW);
  digitalWrite(E2, LOW);
  digitalWrite(F2, LOW);
  digitalWrite(G2, LOW);
}
if(i==48){
 
  digitalWrite(A1, LOW);
  digitalWrite(B1, HIGH);
  digitalWrite(C1, HIGH);
  digitalWrite(D1, LOW);
  digitalWrite(E1, LOW);
  digitalWrite(F1, HIGH);
  digitalWrite(G1, HIGH);
  digitalWrite(A2, HIGH);
  digitalWrite(B2, HIGH);
  digitalWrite(C2, HIGH);
  digitalWrite(D2, HIGH);
  digitalWrite(E2, HIGH);
  digitalWrite(F2, HIGH);
  digitalWrite(G2, HIGH);
}
if(i==49){
 
  digitalWrite(A1, LOW);
  digitalWrite(B1, HIGH);
  digitalWrite(C1, HIGH);
  digitalWrite(D1, LOW);
  digitalWrite(E1, LOW);
  digitalWrite(F1, HIGH);
  digitalWrite(G1, HIGH);
  digitalWrite(A2, HIGH);
  digitalWrite(B2, HIGH);
  digitalWrite(C2, HIGH);
  digitalWrite(D2, LOW);
  digitalWrite(E2, LOW);
  digitalWrite(F2, HIGH);
  digitalWrite(G2, HIGH);
}
if(i==50){
 
  digitalWrite(A1, HIGH);
  digitalWrite(B1, LOW);
  digitalWrite(C1, HIGH);
  digitalWrite(D1, HIGH);
  digitalWrite(E1, LOW);
  digitalWrite(F1, HIGH);
  digitalWrite(G1, HIGH);
  digitalWrite(A2, HIGH);
  digitalWrite(B2, HIGH);
  digitalWrite(C2, HIGH);
  digitalWrite(D2, HIGH);
  digitalWrite(E2, HIGH);
  digitalWrite(F2, HIGH);
  digitalWrite(G2, LOW);
}
}
