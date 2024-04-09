void setup() {
  for (int i = 9; i < 13; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  int i=7;
  for (int n=0;n<4;n++){
  	int p=i%2;
    i=i/2;
    if (p==1){
    	digitalWrite(n+9, HIGH);
    }
  }
}