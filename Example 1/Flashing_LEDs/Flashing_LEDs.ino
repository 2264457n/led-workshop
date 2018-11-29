int led1 = 9;
int led2 = 3;
int led3 = 10;
int led4 = 11; //here we declare which Lilypad Pins have our LEDs attached

void setup() { //this code will only run once

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT); //here we tell the Lilypad that each Pin will be an output


}

void loop() { //this code will run over and over again

  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, LOW); //this is how we tell an LED to turn on or off

  delay(100); //a delay of 100 milliseconds

  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);

  delay(100); 

}
