#include <Adafruit_GFX.h>  // Graphics Library
#include <Adafruit_ST7735.h> // Hardware library 
#include <SPI.h>

#define Pyxa_SCLK 13
#define Pyxa_MOSI 11
#define Pyxa_CS 10
#define Pyxa_RST 9
#define Pyxa_DC 8

Adafruit_ST7735 Pyxa = Adafruit_ST7735 (Pyxa_CS, Pyxa_DC, Pyxa_RST) ;

#define ACTIVATED LOW

int buzzer = A1; // buzzer
int button1 = A2; //Left
int button2 = A3; //Down
int button3 = A4; //Right
int button4 = A5; //UP
int button5 = 7; // Y 
int button6 = 6; // B
int button7 = 5; // A
int button8 = 2; // X
int button1state = 0;
int button2state = 0;
int button3state = 0;
int button4state = 0;
int button5state = 0;
int button6state = 0;
int button7state = 0;
int button8state = 0;




void setup() {
    // put your setup code here, to run once:
    Serial.begin (9600);
    pinMode (A1, OUTPUT); // Set buzzer pin as output
    // Set button pins as inputs
    pinMode (button1, INPUT_PULLUP); 
    pinMode (button2, INPUT_PULLUP); 
    pinMode (button3, INPUT_PULLUP); 
    pinMode (button4, INPUT_PULLUP);
    pinMode (button5, INPUT_PULLUP);
    pinMode (button6, INPUT_PULLUP); 
    pinMode (button7, INPUT_PULLUP); 
    pinMode (button8, INPUT_PULLUP);

    Pyxa.initR (INITR_BLACKTAB) ;
    Pyxa.fillScreen(ST7735_BLUE);
}

void loop() {
  // put your main code here, to run repeatedly:
  
    button1state = digitalRead(button1);
    button2state = digitalRead(button2);
    button3state = digitalRead(button3);
    button4state = digitalRead(button4);
    button5state = digitalRead(button5);
    button6state = digitalRead(button6);
    button7state = digitalRead(button7);
    button8state = digitalRead(button8);
  
}

