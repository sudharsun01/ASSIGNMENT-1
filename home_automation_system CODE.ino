#include<Servo.h>
int ledPin = 3;
int inputPin=8;
int pirState = LOW;
int val = 0;
const int buzzerPin = 12;

void setup()
{
  
  
  pinMode(3,OUTPUT);
  pinMode(8,INPUT);
  pinMode(buzzerPin, OUTPUT);
  
  Serial.begin(9600);
  
}
  
  


void loop()
{
  
  val = digitalRead(inputPin); // read input value
if (val == HIGH) { // check if the input is HIGH
digitalWrite(ledPin, HIGH); // turn LED ON
delay(1000);
digitalWrite(ledPin, LOW);
delay(1000);
if (pirState == LOW) 
{
// we have just turned on
Serial.println("Motion detected!");
// We only want to print on the output change, not state
pirState = HIGH;
}
 
  else 
  {
digitalWrite(ledPin, LOW); // turn LED OFF
if (pirState == HIGH){
// we have just turned of
Serial.println("Motion ended!");
// We only want to print on the output change, not state
pirState = LOW;

}}
  
delay(1000);
   
}{
   double b = analogRead(A0);
    double t = (((b/1024)*5)-0.5)*100;
    Serial.print("Temperature value:");// temperature detection
    Serial.println(t);
    delay (1000);
   if ( t >=100)
   {
     digitalWrite(buzzerPin, HIGH); // if high temperature buzzer on
    
  }
  else
  {
    digitalWrite(buzzerPin, LOW); // if low temperature no buzzer on 
    
  }}
  
}