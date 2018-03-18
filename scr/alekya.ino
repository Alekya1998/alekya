int state = 0;
int incomingByte;

void setup() {
//set pin 12 to output mode
pinMode(6, LOW);
pinMode(7, LOW);
pinMode(8, LOW);
pinMode(9, LOW);
Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
      incomingByte = Serial.read();
      Serial.println(incomingByte);
        if (incomingByte == '1') {
          //pinMode(6, HIGH);
          pinMode(6, OUTPUT);
          digitalWrite(6, HIGH);
          delay(500);
          Serial.println("Relay 1 ON");
          state=1;
        }
        else if (incomingByte =='2') {
          //pinMode(6, LOW);
          pinMode(6, OUTPUT);
          digitalWrite(6, LOW);
          delay(500);
          Serial.println("Relay 1 OFF");
          state = 0;
        }
        if (incomingByte == '3') {
          //pinMode(7, HIGH);
          pinMode(7, OUTPUT);
          digitalWrite(7, HIGH);
          delay(500);
          Serial.println("Relay 2 ON");
          state=1;
        }
        else if (incomingByte =='4') {
          //pinMode(7, LOW);
          pinMode(7, OUTPUT);
          digitalWrite(7, LOW);
          delay(500);
          Serial.println("Relay 2 OFF");
          state = 0;
        }
        if (incomingByte == '5') {
          //pinMode(8, HIGH);
          pinMode(8, OUTPUT);
          digitalWrite(8, HIGH);
          delay(500);
          Serial.println("Relay 3 ON");
          state=1;
        }
        else if (incomingByte =='6') {
          //pinMode(8, LOW);
          pinMode(8, OUTPUT);
          digitalWrite(8, LOW);
          delay(500);
          Serial.println("Relay 3 OFF");
          state = 0;
        }
        if (incomingByte == '7') {
          //pinMode(9, HIGH);
          pinMode(9,HIGH);
          digitalWrite(9,HIGH);
          delay(500);
          Serial.println("Relay 4 ON");
          state=1;
        }
        else if (incomingByte =='8') {
          //pinMode(9, LOW);
          pinMode(9,LOW);
          digitalWrite(9,LOW);
          delay(500);
          Serial.println("Relay 4 OFF");
          state = 0;
        }
  }
}
