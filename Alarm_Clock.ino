#include <Time.h>  

int button = 0; // equals 1 when it is pressed; so turns off alarm
time_t clockTime = 0;
time_t alarmTime = 400;

void setup() {
  // put your setup code here, to run once:
  pinMode(10, INPUT);
  pinMode(8, INPUT);
  pinMode(3, OUTPUT);
}

void loop() {
  clockTime++;
  
  if(alarmTime == clockTime){
    tone(3,300);
  }
  else if(button == 1){
    noTone(3);
  }
  
  if(digitalRead(10) == HIGH){ button = 1; }
  else { button =  0;}  
 }
