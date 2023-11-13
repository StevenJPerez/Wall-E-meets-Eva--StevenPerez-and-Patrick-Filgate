const int buttonPin = 8;
int buttonVal;

void setup() {
//put your code setup here, to run once;
pinMode(buttonPin, INPUT);
}

void loop() {
buttonVal = digitalRead(buttonPin);

if (buttonVal == LOW) {
//do this
} else {
// do that
}
}

practice branch exercise!- Steven
Practiceing the Branch Exercise -- Patrick.
