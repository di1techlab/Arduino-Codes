/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 13;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);  
  Serial.begin(9600);  
}

// the loop routine runs over and over again forever:
void loop() {
  
  int moist=analogRead(A0);
  double voltage=moist/1023.0*5.0;
  
  if(voltage>1.25)
  {
    Serial.println("the soil is too dry it will start watering");
   digitalWrite(13,LOW); 
  }
  else
  {
  Serial.println(voltage);
  digitalWrite(13,HIGH);
  }
delay(1000);



}
