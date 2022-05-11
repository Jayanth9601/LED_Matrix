/**
Auther: Jayanth.s
Date: 14/02/2021
**/
 
int datapin1 = 9;    
int latchpin1 = 6;
int datapin2 = 10;    //the data pin DS is connected to pin 12
int latchpin2 = 11;   //the latch pin ST_CP is connected to pin 11    //the clock pin SH_CP is connected to pin 9
int clockpin2 = 12;
int clockpin1 = 6;
int wait=1;

void setup() {
  Serial.begin(9600); //setting up the serial moniter
  pinMode(datapin1, OUTPUT);   //datapin take output from arduino
  pinMode(latchpin1, OUTPUT);   //latchpin take output from arduino
  pinMode(clockpin1, OUTPUT);   //clockpin take output from arduino

  pinMode(datapin2, OUTPUT);   //datapin take output from arduino
  pinMode(latchpin2, OUTPUT);   //latchpin take output from arduino
  pinMode(clockpin2, OUTPUT);   //clockpin take output from arduino
  
  digitalWrite(latchpin1, LOW);
  shiftOut(datapin1, clockpin1, LSBFIRST, 0x00);
  digitalWrite(latchpin1, HIGH);

  digitalWrite(latchpin2, LOW);
  shiftOut(datapin2, clockpin2, LSBFIRST, 0x00);
  digitalWrite(latchpin2, HIGH);

}

void loop() {

  
  digitalWrite(latchpin1, LOW);
  shiftOut(datapin1, clockpin1, LSBFIRST, B11101110);
  digitalWrite(latchpin1, HIGH);
  digitalWrite(latchpin2, LOW);
  shiftOut(datapin2, clockpin2, LSBFIRST, 0xFF);
  digitalWrite(latchpin2, HIGH);
  delay(wait);

  
  digitalWrite(latchpin1, LOW);
  shiftOut(datapin1, clockpin1, LSBFIRST, B11101110);
  digitalWrite(latchpin1, HIGH);
  digitalWrite(latchpin2, LOW);
  shiftOut(datapin2, clockpin2, LSBFIRST, 0xFF);
  digitalWrite(latchpin2, HIGH);
  delay(wait);

  
  digitalWrite(latchpin1, LOW);
  shiftOut(datapin1, clockpin1, LSBFIRST, B11101110);
  digitalWrite(latchpin1, HIGH);
  digitalWrite(latchpin2, LOW);
  shiftOut(datapin2, clockpin2, LSBFIRST, 0xFF);
  digitalWrite(latchpin2, HIGH);
  delay(wait);

  
  digitalWrite(latchpin1, LOW);
  shiftOut(datapin1, clockpin1, LSBFIRST, B11101110);
  digitalWrite(latchpin1, HIGH);
  digitalWrite(latchpin2, LOW);
  shiftOut(datapin2, clockpin2, LSBFIRST, 0xFF);
  digitalWrite(latchpin2, HIGH);
  delay(wait);

  
  digitalWrite(latchpin1, LOW);
  shiftOut(datapin1, clockpin1, LSBFIRST, B11101110);
  digitalWrite(latchpin1, HIGH);
  digitalWrite(latchpin2, LOW);
  shiftOut(datapin2, clockpin2, LSBFIRST, 0xFF);
  digitalWrite(latchpin2, HIGH);
  delay(wait);
}  
