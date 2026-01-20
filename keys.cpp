// C++ code
//

//author tomaz
//date 11-24-25
//purpose make led blink

int led = 8;

void setup()
{
  //set pin to output
pinMode(led, OUTPUT);
 //set port speed
Serial.begin(9600);  
  
}

void loop()
{
  //set led to high
digitalWrite(led, HIGH);
  delay(500);// wait 500 ms
  digitalWrite(led, LOW);//turn off led
  delay(500);
}
