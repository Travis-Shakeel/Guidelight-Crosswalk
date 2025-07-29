#include <ArduinoUnit.h>

// The same startPin and endPin as in the main code
const int startPin = 2;
const int endPin = 7;
const int sequenceLength = endPin - startPin + 1;

// Forward pin function to test
int getForwardPin(int step) {
  if (step >= 0 && step < sequenceLength) {
    return startPin + step;
  }
  return -1;
}

// Backward pin function to test
int getBackwardPin(int step) {
  if (step >= 0 && step < sequenceLength) {
    return endPin - step;
  }
  return -1;
}

test(testForwardSequence) {
  int expectedPins[] = {2, 3, 4, 5, 6, 7};
  for (int i = 0; i < sequenceLength; i++) {
    assertEqual(expectedPins[i], getForwardPin(i));
  }
}

test(testBackwardSequence) {
  int expectedPins[] = {7, 6, 5, 4, 3, 2};
  for (int i = 0; i < sequenceLength; i++) {
    assertEqual(expectedPins[i], getBackwardPin(i));
  }
}

void setup() {
  Serial.begin(9600);
  Test::begin();
}

void loop() {
  Test::run();
}
