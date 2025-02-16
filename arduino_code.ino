int ButtonValue;
int buzzer  = 11;
int button = 8;
int buttonPressCount;

void setup() {
  pinMode(button, INPUT_PULLUP);
  pinMode(buzzer, OUTPUT); 
}

void loop() {
  ButtonValue = digitalRead(button);
  if (ButtonValue == LOW) {  // Button is pressed
    tone(buzzer, 564);
    digitalWrite(buzzer, HIGH);  // Play 
    buttonPressCount+=1;
  } else {
    noTone(buzzer);
    digitalWrite(buzzer, LOW);  // Stop the buzzer when button is released
  }
}

