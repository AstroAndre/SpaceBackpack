//Hi! Thanks for downloading my code! Have fun!
//If you want to see more, check out my blog on Facebook: https://www.facebook.com/hellwig404/
//My website: http://www.andrehellwig.de/
//Release: 7/15/2016

int led1 = 11;          // the PWM pin the LED is attached to
int led2 = 5;           // the PWM pin the LED is attached to
int led3 = 10;          // the PWM pin the LED is attached to
int led4 = 6;           // the PWM pin the LED is attached to
int led5 = 9;           // the PWM pin the LED is attached to
float brightness1;       // brightness of LED1
float brightness2;      // brightness of LED2
float brightness3;      // brightness of LED3
float brightness4;      // brightness of LED4
float brightness5;      // brightness of LED5
int lightPin = 19;      // Pin for the photoresistor

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
}

// The loop routine runs over and over again forever:
void loop() {
  //Set brightness depeding on the output of the lightPin + a little variance to give the LED a unique brightness
  brightness1 = analogRead(lightPin)+1;
  brightness2 = analogRead(lightPin)+3;
  brightness3 = analogRead(lightPin)+5;
  brightness4 = analogRead(lightPin)+1;
  brightness5 = analogRead(lightPin)+1;

  analogWrite(led1, brightness1);
  analogWrite(led2, brightness2);
  analogWrite(led3, brightness3);
  analogWrite(led4, brightness4);
  analogWrite(led5, brightness5);

  // Wait for 100 milliseconds to see the dimming effect
  delay(100);
}
