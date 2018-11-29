int led1 = 10;
int led2 = 11;
int led3 = 9;
int led4 = 3; //here we declare which Lilypad Pins have our LEDs attached

boolean ledPattern = true; //this will start the tunes playing

int beat[] = {4,4,8,4,4,8,4,4,6,2,12,4,4,6,2,4,4,4,2,2,4,4,4,4,8,8,4,4,8,4,4,8,4,4,6,2,12,4,4,6,2,4,4,4,2,2,4,4,4,4,20};
// with beat[] we are writing how long each LED is on for. This is an "array" of integers (int s)
const int beatLength = 50; //Changes how fast or slow the LEDs flash

void setup() { // put your setup code here, to run once

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT); //here we tell the Lilypad that each Pin will be an output
  
}

void loop() { // put your main code here, to run repeatedly:
  
  for (int i = 0; i < 50; i ++) { //we're going to run the "for" loop 50 times (the length of the song)
    alternateLEDs(); //this is our own function that we will write below - it makes the LEDs alternate
    delay(beat[i] * beatLength); //create a delay (in milliseconds) of the length of each beat
  }
  
}

void alternateLEDs() { //this is our own function that makes the LEDs alternate
  if (ledPattern) { //if "ledPattern" is "true"
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH); //this is how you turn an LED on
    digitalWrite(led3, LOW);
    digitalWrite(led4, HIGH); //make some LEDs on and some off
    ledPattern = false; //make it do the opposite next time
  } else {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, LOW);
    ledPattern = true; //make it do the opposite next time
  }
}
