

#define green 2
#define yellow 3
#define red 4
#define button 7 

#define interval 7




void setup() {
pinMode(green, OUTPUT);
pinMode(yellow, OUTPUT);
pinMode(red, OUTPUT);

pinMode(button, INPUT_PULLUP);
}

void loop() {
  digitalWrite(green, 0);
  digitalWrite(yellow, 1);
  digitalWrite(red, 1);
  if(digitalRead(button) == 0){
yellowb();
  digitalWrite(green, 1);
  digitalWrite(yellow, 1);
  digitalWrite(red, 0);
  
  while(digitalRead(button) != 0){
    delay(50);
  }
yellowb();
  }
  

}
void yellowb(){
    digitalWrite(green, 1);
  digitalWrite(red, 1);
  digitalWrite(yellow, 1);
  for(int i; i < interval; i++){
    digitalWrite(yellow, (!digitalRead(yellow)));
    delay(1000);
  }
}
