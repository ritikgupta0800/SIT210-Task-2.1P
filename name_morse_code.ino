// Name: RITIK
// Task: 2.1P

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN,OUTPUT);
}

void dot(){
  digitalWrite(LED_BUILTIN, HIGH);
  delay(200);
  digitalWrite(LED_BUILTIN, LOW);
  delay(900);
}

void dash(){
  digitalWrite(LED_BUILTIN, HIGH);
  delay(600);
  digitalWrite(LED_BUILTIN, LOW);
  delay(900); 
}
void loop() {
  // put your main code here, to run repeatedly:
  //My name: RITIK
  //Morse Code: .-. .. - .. -.-

  //led blink for 'R'
  dot();
  dash();
  dot();
  delay(1500);

  //led blink for 'I'
  dot();
  dot();
  delay(1500);

  //led blink for 'T'
  dash();
  delay(1500);

  //led blink for 'I'
  dot();
  dot();
  delay(1500);

  //led blink for 'K'
  dash();
  dot();
  dash();
  delay(200000);

}
