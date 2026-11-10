const int Red = 8;
const int Yellow = 9;
const int Green = 10;
//digital pin

void setup() {
  // put your setup code here, to run once:
pinMode(Red, OUTPUT);
pinMode(Yellow, OUTPUT);
pinMode(Green, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  //red light
  digitalWrite(Red, HIGH);
  digitalWrite(Yellow, LOW);
  digitalWrite(Green, LOW);
  delay(5000);
  //logic : First, the red light turns on, while the red light is on the other lights are off for 5 seconds

  //green light
  digitalWrite(Red, LOW);
  digitalWrite(Green, HIGH);
  delay(5000);
  //after red turn on for 5 seconds, red turn off and green turn on 5 seconds

  //yellow light
  digitalWrite(Green, LOW);
  digitalWrite(Yellow, HIGH);
  delay(2000);
  //after 5 seconds green on, then yellow turn on and green turn off 2 seconds
  //repeat

}
