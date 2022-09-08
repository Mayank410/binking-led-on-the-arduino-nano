void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
}

void dot()
{
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);
}
void space()
{ 
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(2000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(2000);
  
}
void dash()
{
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(3000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:
  //M
  dash();
  dash();
  space();

  //A
  dot();
  dash();
  space();

  //Y
  dash();
  dot();
  dash();
  dash();
  space();
  
  

  //A
  dot();
  dash();
  space();

  //N
  dash();
  dot();
  space();

  //K
  dash();
  dot();
  dash();
  space();
}
