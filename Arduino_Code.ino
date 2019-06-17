int ledPin = 11; //define led pin

int dimming = 0; //define the value received from TouchDesigner

void setup() {
  Serial.begin(9600);
  while(!Serial){
    ;
  }

  pinMode(ledPin, OUTPUT); //set up led pin as output
}

void loop() {
  if(Serial.available()>0){
    dimming = Serial.read();

    analogWrite(ledPin, dimming); //give value to ledPin
  }

}
