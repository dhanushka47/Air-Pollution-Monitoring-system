#include <MQ135.h>
#include <Wire.h>
//pins
const int mqPin = A0; // Analog pin for MQ-9 sensor
const int mq135Pin = A1; // Connect MQ135 sensor to analog pin A1
MQ135 gasSensor135 = MQ135(mq135Pin);
const int buzzerPin = 6; // Buzzer connected to digital pin 6
const int pm25Address = 0x60; // PM2.5 sensor I2C address
const int redPin = 11;   // Red LED connected to digital pin 11
const int greenPin = 10; // Green LED connected to digital pin 10
const int bluePin = 9;   // Blue LED connected to digital pin 9
const int fanPin = 6;    // Fan control pin connected to digital pin 6


//data values
float So2Val =0;
float  CoVal = 0;
int PmVal =0;

//setup function
void setup() {

  pinMode(buzzerPin, OUTPUT);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(fanPin, OUTPUT);


  Wire.begin();
  Serial.begin(9600);


  Serial.println("System Started...!");
}

//loop function
void loop() {
  Serial.println("get SO2 Level");
  getMq135();
  delay(500);
  Serial.println("get CO Level");
  getMq09();
  delay(500);
  Serial.println("get PM 2.5 Level");
  pmValue();
  delay(500);
  Serial.println("calculation Starting..!");


}
