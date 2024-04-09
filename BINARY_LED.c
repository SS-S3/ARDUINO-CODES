void setup() {
  for (int i = 9; i < 13; i++) {// short way to setup pins
    pinMode(i, OUTPUT);
  }
  // for the leds connescted to pins 9 to 12 in sequence as their 4 digit binary
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  int i=7;
  // for the integer be 7, you can change it to any between 0-15
  for (int n=0;n<4;n++){
  	int p=i%2; // gives remainder
    i=i/2;// gives quotient
    if (p==1){
    	digitalWrite(n+9, HIGH);
    }
  }
}
