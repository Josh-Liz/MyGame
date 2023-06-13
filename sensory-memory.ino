#include <Adafruit_CircuitPlayground.h>

int leftButt = 4;
int rightButt = 5;
volatile bool leftFlag = false;
volatile bool rightFlag = false;
int LED_left = 1;
int LED_right = 8;
int a[5] = {1, 8, 8, 1, 8};
volatile int k = -1;

void setup() {
  Serial.begin(9600);
  CircuitPlayground.begin();
  pinMode(rightButt, INPUT_PULLDOWN);
  attachInterrupt(digitalPinToInterrupt(5), rightbuttonISRs, RISING);
  pinMode(leftButt, INPUT_PULLDOWN);
  attachInterrupt(digitalPinToInterrupt(4), leftbuttonISRs, RISING);
  CircuitPlayground.setPixelColor(8, 255, 255, 255);
  delay(1000);
  CircuitPlayground.clearPixels();
  CircuitPlayground.setPixelColor(1, 255, 255, 255);
  delay(1000);
  CircuitPlayground.clearPixels();
  delay(100);
  CircuitPlayground.setPixelColor(1, 255, 255, 255);
  delay(1000);
  CircuitPlayground.clearPixels();
  CircuitPlayground.setPixelColor(8, 255, 255, 255);
  delay(1000);
  CircuitPlayground.clearPixels();
  CircuitPlayground.setPixelColor(1, 255, 255, 255);
  delay(1000);
  CircuitPlayground.clearPixels();
}

void loop() {
  if (rightFlag) {
    k++;
    delay(5);
    if (1 == a[k]) {
    CircuitPlayground.playTone(600, 200);
    } else {
      CircuitPlayground.setPixelColor(0, 255, 0, 0);
      CircuitPlayground.setPixelColor(1, 255, 0, 0);
      CircuitPlayground.setPixelColor(2, 255, 0, 0);
      CircuitPlayground.setPixelColor(3, 255, 0, 0);
      CircuitPlayground.setPixelColor(4, 255, 0, 0);
      CircuitPlayground.setPixelColor(5, 255, 0, 0);
      CircuitPlayground.setPixelColor(6, 255, 0, 0);
      CircuitPlayground.setPixelColor(7, 255, 0, 0);
      CircuitPlayground.setPixelColor(8, 255, 0, 0);
      CircuitPlayground.setPixelColor(9, 255, 0, 0);
      CircuitPlayground.playTone(300, 600); 
      CircuitPlayground.playTone(150, 200); 
      Serial.println("Game over");
      delay(100000);
      return;
    }
    rightFlag = false;
  }

  if (leftFlag) {
    k++;
    delay(5);
    if (8 == a[k]) {
     CircuitPlayground.playTone(600, 200); 
    } else {
      CircuitPlayground.setPixelColor(0, 255, 0, 0);
      CircuitPlayground.setPixelColor(1, 255, 0, 0);
      CircuitPlayground.setPixelColor(2, 255, 0, 0);
      CircuitPlayground.setPixelColor(3, 255, 0, 0);
      CircuitPlayground.setPixelColor(4, 255, 0, 0);
      CircuitPlayground.setPixelColor(5, 255, 0, 0);
      CircuitPlayground.setPixelColor(6, 255, 0, 0);
      CircuitPlayground.setPixelColor(7, 255, 0, 0);
      CircuitPlayground.setPixelColor(8, 255, 0, 0);
      CircuitPlayground.setPixelColor(9, 255, 0, 0);
        CircuitPlayground.playTone(100, 200); 
      Serial.println("Game over");
      delay(100000);
      return;
    }
    leftFlag = false;
  }

  if (k == 4) {
    CircuitPlayground.setPixelColor(0, 0, 255, 0);
    CircuitPlayground.setPixelColor(1, 0, 255, 0);
    CircuitPlayground.setPixelColor(2, 0, 255, 0);
    CircuitPlayground.setPixelColor(3, 0, 255, 0);
    CircuitPlayground.setPixelColor(4, 0, 255, 0);
    CircuitPlayground.setPixelColor(5, 0, 255, 0);
    CircuitPlayground.setPixelColor(6, 0, 255, 0);
    CircuitPlayground.setPixelColor(7, 0, 255, 0);
    CircuitPlayground.setPixelColor(8, 0, 255, 0);
    CircuitPlayground.setPixelColor(9, 0, 255, 0);
    CircuitPlayground.playTone(600, 200); 
    CircuitPlayground.playTone(900, 200); 
    Serial.println("You win!");
    delay(100000);
    return;
  }
}

void leftbuttonISRs() {
  leftFlag = true;
}

void rightbuttonISRs() {
  rightFlag = true;
}


