int potPin=A5;
int gPin=6;
int PotVal;
float LEDVal;
void setup() {
  // put your setup code here, to run once:
  pinMode(potPin,INPUT);
  pinMode(gPin,OUTPUT);
  Serial.begin(9600);


}

void loop() {
  // put your main code here, to run repeatedly:
  PotVal=analogRead(potPin);
  LEDVal=(255./1023.)*PotVal;
  analogWrite(gPin,LEDVal);
  Serial.println(LEDVal);

}
