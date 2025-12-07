
//@author: Tomaz Boyd 
//@Date: 12/6/2025
//@Purpose: simple security system that checks the password from keypad

#include <Keypad.h>
int ledRed = 2;
int ledGreen = 4;

int failDelay = 3000;
int successDelay = 3000;

const byte ROWS = 4;
const byte COLS = 4;

byte rowPins[ROWS] = {13, 12, 11, 10}; 
byte colPins[COLS] = {9, 8, 7, 6}; 

char  keyPadEntries[6];
char keys[ROWS][COLS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

char password[] = "1234#";



Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

int keyPressCount = 0;

void setup()
{
  Serial.begin(9600);
 
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  char key = keypad.getKey();
  
  
  if (key){
    keyPadEntries[keyPressCount] = key;
    keyPressCount++;
    
    Serial.print("Key pressed:");
    Serial.println(key);
    

    if(keyPressCount == 5 && key == '#'){
      keyPadEntries[keyPressCount] = '\0'; // Null-terminate the string
      
      if (strcmp(keyPadEntries, password) == 0){
        Serial.println("Correct Password Entered!");
        digitalWrite(ledGreen,HIGH);
        delay(successDelay);
        digitalWrite(ledGreen,LOW);
        keyPressCount = 0;//reset the counter
      }

     
  }
    else if(keyPressCount != 5 && key == '#'){
        digitalWrite(ledRed,HIGH);
        Serial.println("Invalid Password Attempt! Please try again.");
        delay(failDelay);
        digitalWrite(ledRed,LOW);
        keyPressCount = 0;//reset the counter
    }

  }
}