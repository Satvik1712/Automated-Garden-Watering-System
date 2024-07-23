#include <Adafruit_LiquidCrystal.h>

int soilmoisture_1 = 0;
int soilmoisture_2 = 0;
int soilmoisture_3 = 0;
int soilmoisture_4 = 0;
const int OUTPUT_PINS[] = {3, 4, 5, 6, 7, 8, 9, 10, 11};
const int NUM_OUTPUTS = 9;
int pin = 0;
unsigned long previousMillis = 0;
const long interval = 10000; // 10 seconds interval for HIGH state

Adafruit_LiquidCrystal lcd_1(0);

int Soil_1 = 0;
int Soil_2 = 0;
int Soil_3 = 0;
int Soil_4 = 0;
int l = 0;
void setup()
{
  Serial.begin(9600);
  lcd_1.begin(16, 2);
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  Serial.begin(9600);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop()
{
  unsigned long currentMillis = millis();
  Soil_1 = analogRead(A0);
  Soil_2 = analogRead(A1);
  Soil_3 = analogRead(A2);
  Soil_4 = analogRead(A3);
  l = 500; // Declare according to soil type
  //Serial.println('Moisture Level of Sensor-1 is:');
  //Serial.println(Soil_1);
  //Serial.println('Moisture Level of Sensor-2 is:');
  //Serial.println(Soil_2);
  if (Soil_1>=l && Soil_2>=l && Soil_3>=l && Soil_4>=l){
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
    if (currentMillis - previousMillis >= interval) {
      for (int i = 0; i < NUM_OUTPUTS; i++) {
        digitalWrite(OUTPUT_PINS[i], LOW);
      }
      previousMillis = currentMillis;
    }
   }
  else if (Soil_1>=l && Soil_2>=l && Soil_3>=l && Soil_4<l){
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
    if (currentMillis - previousMillis >= interval) {
      
      for (int i = 0; i < NUM_OUTPUTS; i++) {
        digitalWrite(OUTPUT_PINS[i], LOW);
      }
      previousMillis = currentMillis;
    }
    }
  else if (Soil_1>=l && Soil_2>=l && Soil_3<l && Soil_4>=l){
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    if (currentMillis - previousMillis >= interval) {
      for (int i = 0; i < NUM_OUTPUTS; i++) {
        digitalWrite(OUTPUT_PINS[i], LOW);
      }
      previousMillis = currentMillis;
    }
    }
  else if (Soil_1>=l && Soil_2>=l && Soil_3<l && Soil_4<l){
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
    if (currentMillis - previousMillis >= interval) {
      for (int i = 0; i < NUM_OUTPUTS; i++) {
        digitalWrite(OUTPUT_PINS[i], LOW);
      }
      previousMillis = currentMillis;
    }
    }
  else if (Soil_1>=l && Soil_2<l && Soil_3>=l && Soil_4>=l){
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    digitalWrite(8,HIGH);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    if (currentMillis - previousMillis >= interval) {
      for (int i = 0; i < NUM_OUTPUTS; i++) {
        digitalWrite(OUTPUT_PINS[i], LOW);
      }
      previousMillis = currentMillis;
    }
    }
  else if (Soil_1>=l && Soil_2<l && Soil_3>=l && Soil_4<l){
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
    digitalWrite(7,LOW);
    digitalWrite(8,HIGH);
    digitalWrite(9,LOW);
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
    if (currentMillis - previousMillis >= interval) {
      for (int i = 0; i < NUM_OUTPUTS; i++) {
        digitalWrite(OUTPUT_PINS[i], LOW);
      }
      previousMillis = currentMillis;
    }
    }
  else if (Soil_1>=l && Soil_2<l && Soil_3<l && Soil_4>=l){
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    if (currentMillis - previousMillis >= interval) {
      for (int i = 0; i < NUM_OUTPUTS; i++) {
        digitalWrite(OUTPUT_PINS[i], LOW);
      }
      previousMillis = currentMillis;
    }
    }
  else if (Soil_1>=l && Soil_2<l && Soil_3<l && Soil_4<l){
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,LOW);
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
    if (currentMillis - previousMillis >= interval) {
      for (int i = 0; i < NUM_OUTPUTS; i++) {
        digitalWrite(OUTPUT_PINS[i], LOW);
      }
      previousMillis = currentMillis;
    }
    }
  else if (Soil_1<l && Soil_2>=l && Soil_3>=l && Soil_4>=l){
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,HIGH);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    if (currentMillis - previousMillis >= interval) {
      for (int i = 0; i < NUM_OUTPUTS; i++) {
        digitalWrite(OUTPUT_PINS[i], LOW);
      }
      previousMillis = currentMillis;
    }
    }
  else if (Soil_1<l && Soil_2>=l && Soil_3>=l && Soil_4<l){
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
    if (currentMillis - previousMillis >= interval) {
      for (int i = 0; i < NUM_OUTPUTS; i++) {
        digitalWrite(OUTPUT_PINS[i], LOW);
      }
      previousMillis = currentMillis;
    }
    }
  else if (Soil_1<l && Soil_2>=l && Soil_3<l && Soil_4>=l){
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(7,HIGH);
    digitalWrite(8,LOW);
    digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    if (currentMillis - previousMillis >= interval) {
      for (int i = 0; i < NUM_OUTPUTS; i++) {
        digitalWrite(OUTPUT_PINS[i], LOW);
      }
      previousMillis = currentMillis;
    }
    }
  else if (Soil_1<l && Soil_2>=l && Soil_3<l && Soil_4<l){
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(8,LOW);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
    if (currentMillis - previousMillis >= interval) {
      for (int i = 0; i < NUM_OUTPUTS; i++) {
        digitalWrite(OUTPUT_PINS[i], LOW);
      }
      previousMillis = currentMillis;
    }
    }
  else if (Soil_1<l && Soil_2<l && Soil_3>=l && Soil_4>=l){
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    if (currentMillis - previousMillis >= interval) {
      for (int i = 0; i < NUM_OUTPUTS; i++) {
        digitalWrite(OUTPUT_PINS[i], LOW);
      }
      previousMillis = currentMillis;
    }
    }
  else if (Soil_1<l && Soil_2<l && Soil_3>=l && Soil_4<l){
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(9,LOW);
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
    if (currentMillis - previousMillis >= interval) {
      for (int i = 0; i < NUM_OUTPUTS; i++) {
        digitalWrite(OUTPUT_PINS[i], LOW);
      }
      previousMillis = currentMillis;
    }
    }
  else if (Soil_1<l && Soil_2<l && Soil_3<l && Soil_4>=l){
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    if (currentMillis - previousMillis >= interval) {
      for (int i = 0; i < NUM_OUTPUTS; i++) {
        digitalWrite(OUTPUT_PINS[i], LOW);
      }
      previousMillis = currentMillis;
    }
    }
  else if (Soil_1<l && Soil_2<l && Soil_3<l && Soil_4<l){
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
    if (currentMillis - previousMillis >= interval) {
      for (int i = 0; i < NUM_OUTPUTS; i++) {
        digitalWrite(OUTPUT_PINS[i], LOW);
      }
      previousMillis = currentMillis;
    }
    }
  delay(20000);
  
  soilmoisture_1 = analogRead(A0);  
  soilmoisture_2 = analogRead(A1);  
  soilmoisture_3 = analogRead(A2);  
  soilmoisture_4 = analogRead(A3);
  lcd_1.setCursor(0,0);
  lcd_1.print("SM1:");
  lcd_1.setCursor(5, 0);
  lcd_1.print(soilmoisture_1);
  lcd_1.setCursor(9,0);
  lcd_1.print("SM2:");
  lcd_1.setCursor(13, 0);
  lcd_1.print(soilmoisture_2);
  lcd_1.setCursor(0,1);
  lcd_1.print("SM3:");
  lcd_1.setCursor(5, 1);
  lcd_1.print(soilmoisture_3);
  lcd_1.setCursor(9,1);
  lcd_1.print("SM4:");
  lcd_1.setCursor(13, 1);
  lcd_1.print(soilmoisture_4);
  delay(10);
  
   // Delay a little bit to improve simulation performance
}