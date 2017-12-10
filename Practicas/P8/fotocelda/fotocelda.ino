int lightPin = 0;

void setup(){
    Serial.begin(9600);
}

void loop(){

    int lectura = analogRead(lightPin);
    Serial.println(lectura);
    delay(100);
}
