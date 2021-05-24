int leds[]={3,4,5,6,7,8};
void setup() {
  // put your setup code here, to run once:
for(int n=0;n<6;n++){
pinMode(leds[n],OUTPUT);
}
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(leds[0],HIGH);
digitalWrite(leds[5],HIGH);
delay(3000);
digitalWrite(leds[4],HIGH);
digitalWrite(leds[5],LOW);
delay(500);
digitalWrite(leds[2],HIGH);
digitalWrite(leds[3],HIGH);
digitalWrite(leds[4],LOW);
digitalWrite(leds[0],LOW);
delay(3000);
digitalWrite(leds[1],HIGH);
digitalWrite(leds[2],LOW);
delay(500);
}