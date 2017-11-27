int forwardPin = 9;    // set high for forward
int reversePin = 10;    // set high for reverse
int disablePin = 11;    // set high to disable the bottom corners (Pulse for speed control)

const int stopSpeed = 255;
const int lowSpeed = 200;
const int mediumSpeed = 127;
const int highSpeed = 60;
const int fullSpeed = 0;

void setup() {
  pinMode(forwardPin, OUTPUT);
  pinMode(reversePin, OUTPUT);
  digitalWrite(forwardPin, LOW);
  digitalWrite(reversePin, LOW);

  Serial.begin(9600);
  Serial.println(fullSpeed);
}

void loop() {
  analogWrite(disablePin, fullSpeed);
  digitalWrite(forwardPin, HIGH);

  /*
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 1) {
    // sets the value (range from 0 to 255):
    analogWrite(redLedPin, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    Serial.println(fadeValue);
    delay(30);
  }
  */
}
