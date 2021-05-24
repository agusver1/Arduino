int leds[]={5,6,7,8,9,10,11};
int tiempo = 50;
void setup() {
  // put your setup code here, to run once:
for(int n=0;n<7;n++){
pinMode(leds[n],OUTPUT);
}
}

void loop() {
  // put your main code here, to run repeatedly:
for(int n=0;n<7;n++){
  digitalWrite(leds[n],HIGH);
  delay(tiempo);
  digitalWrite(leds[n],LOW);
  delay(tiempo);
}
for(int n=6;n>=0;n--){
  digitalWrite(leds[n],HIGH);
  delay(tiempo);
  digitalWrite(leds[n],LOW);
  delay(tiempo);
}

}