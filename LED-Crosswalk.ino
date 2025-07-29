// LED Sequencer - Refactored for Testability

const int startPin = 2;
const int endPin = 7;
const int sequenceLength = endPin - startPin + 1;
int timer = 100;  // delay time in milliseconds

// Return the pin number for the forward sequence step (0 to 5)
int getForwardPin(int step) {
  if (step >= 0 && step < sequenceLength) {
    return startPin + step;
  }
  return -1; // invalid step
}

// Return the pin number for the backward sequence step (0 to 5)
int getBackwardPin(int step) {
  if (step >= 0 && step < sequenceLength) {
    return endPin - step;
  }
  return -1; // invalid step
}

// Runs one step: turns pin ON, delays, then turns pin OFF
void runSequenceStep(int pin) {
  if (pin == -1) return;
  digitalWrite(pin, HIGH);
  delay(timer);
  digitalWrite(pin, LOW);
}

void setup() {
  for (int pin = startPin; pin <= endPin; pin++) {
    pinMode(pin, OUTPUT);
    digitalWrite(pin, LOW);
  }
}

void loop() {
  // Forward sequence
  for (int step = 0; step < sequenceLength; step++) {
    int pin = getForwardPin(step);
    runSequenceStep(pin);
  }
  // Backward sequence
  for (int step = 0; step < sequenceLength; step++) {
    int pin = getBackwardPin(step);
    runSequenceStep(pin);
  }
}
