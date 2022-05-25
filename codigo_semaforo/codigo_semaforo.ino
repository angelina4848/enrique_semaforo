

#define green 2
#define yellow 3
#define red 4
#define button 5

#define interval 7




void setup() {
pinMode(green, OUTPUT);
pinMode(yellow, OUTPUT);
pinMode(red, OUTPUT);

pinMode(button, INPUT_PULLUP);
}

void loop() {
  digitalWrite(green, 1);
  digitalWrite(yellow, 0);
  digitalWrite(red, 0);
  if(digitalRead(button) == 0){
  digitalWrite(green, 0);
  digitalWrite(yellow, 1);
  digitalWrite(red, 0);
  delay(interval*1000);
  digitalWrite(green, 0);
  digitalWrite(yellow, 0);
  digitalWrite(red, 1);
  
  while(digitalRead(button) != 0){
    delay(50);
  }
  digitalWrite(green, 0);
  digitalWrite(yellow, 1);
  digitalWrite(red, 0);
  delay(interval*1000);
  }
  

}
