int inByte = 0; 
void setup() {
  // start serial port at 9600 bps:
  Serial.begin(9600);
  while (!Serial) {
    ;
  }
  establishContact();
}

void loop() {
  if (Serial.available() > 0) {
    // get incoming byte:
    inByte = Serial.read();
    for(int i=0;i<=40;i++){ 
      Serial.print(String(i));
      Serial.print("\n");
      delay(15);
    }
    Serial.print("\n");
  }
}

void establishContact() {
  while (Serial.available() <= 0) {
    Serial.println('1'); 
    delay(1000);
  }
}
