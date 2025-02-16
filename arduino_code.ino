int ButtonValue;
int buzzer  = 11;
int button = 8;
int buttonPressCount;
void setup() {
  Serial.begin(9600);
  // Serial.println("Welcome to Habit Rabbit!");
  pinMode(button, INPUT_PULLUP);
  pinMode(buzzer, OUTPUT); 
}
void loop() {
  ButtonValue = digitalRead(button);
  if (ButtonValue == LOW) {  // Button is pressed
    buttonPressCount+=1;
    Serial.println(buttonPressCount);
    tone(buzzer, 564);
    digitalWrite(buzzer, HIGH);  // Play 
    delay(500);
  } else {
    noTone(buzzer);
    digitalWrite(buzzer, LOW);  // Stop the buzzer when button is released
  }
}
