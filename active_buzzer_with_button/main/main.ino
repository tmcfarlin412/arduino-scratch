int buzzer = 12;  //the pin of the active buzzer
int button = 9;

void setup() {
 pinMode(buzzer, OUTPUT);  //initialize the buzzer pin as an output
 pinMode(button, INPUT_PULLUP);  //initialize the buzzer pin as an output
}

void loop() {
  
  unsigned char i;
  
  while(1) {
      
      // output an frequency
//      for (i=0; i<80; i++) {
//        if (digitalRead(button) == LOW) {
//          digitalWrite(buzzer, HIGH);
//          delay(1);  //wait for 1ms
//          digitalWrite(buzzer, LOW);
//          delay(1);  //wait for 1ms
//        }
//      }
      
      // output another frequency
      for (i=0; i<100; i++) {
        if (digitalRead(button) == LOW) {
          digitalWrite(buzzer, HIGH);
          delay(4);  // wait
          digitalWrite(buzzer, LOW);
          delay(100);  // wait
        }
      }
  }
} 
