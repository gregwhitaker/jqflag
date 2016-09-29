/*
 * Copyright 2016 Greg Whitaker
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
 
#include <Servo.h>

Servo myservo;

const int STOP = 93;
const int CLOCKWISE = 180;
const int COUNTER_CLOCKWISE = 0;

const int CW_PIN = 7;
const int CCW_PIN = 2;

void setup() {
  myservo.attach(9);
  pinMode(CW_PIN, INPUT_PULLUP);
  pinMode(CCW_PIN, INPUT_PULLUP);
}

void loop() {
  if(digitalRead(CW_PIN) == LOW) {
    myservo.write(CLOCKWISE);
  } else if(digitalRead(CCW_PIN) == LOW) {
    myservo.write(COUNTER_CLOCKWISE);
  } else {
    myservo.write(STOP);
  }
}


