#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
#define disparo  9 //definimos el pin al que conectaremos el trigger 
#define receptor  10 //definimos el pin al que conetaremos el echo 
#define BUZZER 11 

long sensor, distancia;

void distancia1();
void distancia2();
void distancia3();
void distancia4();
void distancia5();
void distancia6();
void distancia7();
void distancia8();
void distancia9();
void distancia10();

//Crear el objeto lcd  dirección  0x27 y 16 columnas x 2 filas
LiquidCrystal_I2C lcd_JARED(0x27,16,2);  //

void setup() {
  // Inicializar el LCD
  lcd_JARED.init();
  //Encender la luz de fondo.
  lcd_JARED.backlight();
  pinMode(disparo, OUTPUT);//definimos la variable disparo como una salida
  pinMode(receptor,INPUT);//definimos la variable receptro como una entrada
  Serial.begin(9600);
  for(int i = 30; i <=39; i++){
  pinMode(i,OUTPUT);
  pinMode(11,OUTPUT);
}
}

void loop() {
   
   digitalWrite(disparo, HIGH);
   delayMicroseconds(10);
   digitalWrite(disparo, LOW);
   sensor = pulseIn(receptor, HIGH);
   distancia = sensor / 59;
   Serial.println(distancia);
   Serial.println("cm");
   delay(100);

 distancia1();

 distancia2();

 distancia3();

 distancia4();
 
 distancia5();

 distancia6();
 
 distancia7();

 distancia8();
 
 distancia9();

 distancia10();

 distancia11();
  
}

  void distancia1(){
    if(distancia == 2){
      lcd_JARED.clear();
      lcd_JARED.setCursor(0,0);
      lcd_JARED.print("100%");
    digitalWrite(30, HIGH);
    digitalWrite(31, HIGH);
    digitalWrite(32, HIGH);
    digitalWrite(33, HIGH);
    digitalWrite(34, HIGH);
    digitalWrite(35, HIGH);
    digitalWrite(36, HIGH);
    digitalWrite(37, HIGH);
    digitalWrite(38, HIGH);
    digitalWrite(39, HIGH);
    noTone(BUZZER);
    }
  }
 void distancia2(){
    if(distancia == 4){
      lcd_JARED.clear();
      lcd_JARED.setCursor(0,0);
      lcd_JARED.print("90%");
    digitalWrite(30, LOW);
    digitalWrite(31, HIGH);
    digitalWrite(32, HIGH);
    digitalWrite(33, HIGH);
    digitalWrite(34, HIGH);
    digitalWrite(35, HIGH);
    digitalWrite(36, HIGH);
    digitalWrite(37, HIGH);
    digitalWrite(38, HIGH);
    digitalWrite(39, HIGH);
    noTone(BUZZER);
    }
 }
 void distancia3(){
    if(distancia == 6){
      lcd_JARED.clear();
      lcd_JARED.setCursor(0,0);
      lcd_JARED.print("80%");
    digitalWrite(30, LOW);
    digitalWrite(31, LOW);
    digitalWrite(32, HIGH);
    digitalWrite(33, HIGH);
    digitalWrite(34, HIGH);
    digitalWrite(35, HIGH);
    digitalWrite(36, HIGH);
    digitalWrite(37, HIGH);
    digitalWrite(38, HIGH);
    digitalWrite(39, HIGH);
    noTone(BUZZER);
    }
 }
 void distancia4(){
    if(distancia == 8){
      lcd_JARED.clear();
      lcd_JARED.setCursor(0,0);
      lcd_JARED.print("70%");
          digitalWrite(30, HIGH);
    digitalWrite(30, LOW);
    digitalWrite(31, LOW);
    digitalWrite(32, LOW);
    digitalWrite(33, HIGH);
    digitalWrite(34, HIGH);
    digitalWrite(35, HIGH);
    digitalWrite(36, HIGH);
    digitalWrite(37, HIGH);
    digitalWrite(38, HIGH);
    digitalWrite(39, HIGH);
    noTone(BUZZER);
  }
 }
 void distancia5(){
    if(distancia == 10){
      lcd_JARED.clear();
      lcd_JARED.setCursor(0,0);
      lcd_JARED.print("60%");
    digitalWrite(30, LOW);
    digitalWrite(31, LOW);
    digitalWrite(32, LOW);
    digitalWrite(33, LOW);
    digitalWrite(34, HIGH);
    digitalWrite(35, HIGH);
    digitalWrite(36, HIGH);
    digitalWrite(37, HIGH);
    digitalWrite(38, HIGH);
    digitalWrite(39, HIGH);
    noTone(BUZZER);
  }
 }
 void distancia6(){
    if(distancia == 12){
      lcd_JARED.clear();
      lcd_JARED.setCursor(0,0);
      lcd_JARED.print("50%");
    digitalWrite(30, LOW);
    digitalWrite(31, LOW);
    digitalWrite(32, LOW);
    digitalWrite(33, LOW);
    digitalWrite(34, LOW);
    digitalWrite(35, HIGH);
    digitalWrite(36, HIGH);
    digitalWrite(37, HIGH);
    digitalWrite(38, HIGH);
    digitalWrite(39, HIGH);
    noTone(BUZZER);
  }
 }
 void distancia7(){
    if(distancia == 14){
      lcd_JARED.clear();
      lcd_JARED.setCursor(0,0);
      lcd_JARED.print("40%");
    digitalWrite(30, LOW);
    digitalWrite(31, LOW);
    digitalWrite(32, LOW);
    digitalWrite(33, LOW);
    digitalWrite(34, LOW);
    digitalWrite(35, LOW);
    digitalWrite(36, HIGH);
    digitalWrite(37, HIGH);
    digitalWrite(38, HIGH);
    digitalWrite(39, HIGH);
    noTone(BUZZER);
  }
 }
 void distancia8(){
    if(distancia == 16){
      lcd_JARED.clear();
      lcd_JARED.setCursor(0,0);
      lcd_JARED.print("30%");
    digitalWrite(30, LOW);
    digitalWrite(31, LOW);
    digitalWrite(32, LOW);
    digitalWrite(33, LOW);
    digitalWrite(34, LOW);
    digitalWrite(35, LOW);
    digitalWrite(36, LOW);
    digitalWrite(37, HIGH);
    digitalWrite(38, HIGH);
    digitalWrite(39, HIGH);
    noTone(BUZZER);
  }
 }
 void distancia9(){
    if(distancia == 18){
      lcd_JARED.clear();
      lcd_JARED.setCursor(0,0);
      lcd_JARED.print("20%");
    digitalWrite(30, LOW);
    digitalWrite(31, LOW);
    digitalWrite(32, LOW);
    digitalWrite(33, LOW);
    digitalWrite(34, LOW);
    digitalWrite(35, LOW);
    digitalWrite(36, LOW);
    digitalWrite(37, LOW);
    digitalWrite(38, HIGH);
    digitalWrite(39, HIGH);
    noTone(BUZZER);
  }
 }
 void distancia10(){
  if(distancia == 20){
      lcd_JARED.clear();
      lcd_JARED.setCursor(0,0);
      lcd_JARED.print("10%");
    digitalWrite(30, LOW);
    digitalWrite(31, LOW);
    digitalWrite(32, LOW);
    digitalWrite(33, LOW);
    digitalWrite(34, LOW);
    digitalWrite(35, LOW);
    digitalWrite(36, LOW);
    digitalWrite(37, LOW);
    digitalWrite(38, LOW);
    digitalWrite(39, HIGH);
    noTone(BUZZER);
  }
 }

 void distancia11(){
  if(distancia > 20){
      lcd_JARED.clear();
      lcd_JARED.setCursor(0,0);
      lcd_JARED.print("0%");
      tone(BUZZER, 1000);
    digitalWrite(30, LOW);
    digitalWrite(31, LOW);
    digitalWrite(32, LOW);
    digitalWrite(33, LOW);
    digitalWrite(34, LOW);
    digitalWrite(35, LOW);
    digitalWrite(36, LOW);
    digitalWrite(37, LOW);
    digitalWrite(38, LOW);
    digitalWrite(39, LOW);
    
  }
 }
