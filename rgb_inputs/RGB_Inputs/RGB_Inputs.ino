#define BBLUE 9
#define BGREEN 10
#define BLUE 3
#define GREEN 5
#define RED 6

byte leds = 0;

void setup() 
{
  pinMode(BLUE, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(RED, OUTPUT);
  digitalWrite(RED, LOW);
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, LOW);
  pinMode(BBLUE, INPUT_PULLUP);  
  pinMode(BGREEN, INPUT_PULLUP);  
}

void loop() 
{
  if (digitalRead(BBLUE) == LOW && digitalRead(BGREEN) == LOW) {
    digitalWrite(RED, HIGH);
    digitalWrite(BLUE, LOW);
    digitalWrite(GREEN, LOW);
  } else if (digitalRead(BBLUE) == LOW) {
    digitalWrite(RED, LOW);
    digitalWrite(BLUE, HIGH);
    digitalWrite(GREEN, LOW);
  } else if (digitalRead(BGREEN) == LOW) {
    digitalWrite(RED, LOW);
    digitalWrite(BLUE, LOW);
    digitalWrite(GREEN, HIGH);
  } else {
    digitalWrite(RED, LOW);
    digitalWrite(BLUE, LOW);
    digitalWrite(GREEN, LOW);
  }
}
