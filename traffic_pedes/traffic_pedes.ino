int red = 2;
int yellow = 3;
int green = 4;
int del = 5000;

void setup()
{
   pinMode(red, OUTPUT);
   pinMode(yellow, OUTPUT);
   pinMode(green, OUTPUT);
}

void loop()
{
   digitalWrite(green, HIGH);
   delay(del);
   digitalWrite(green, LOW);
   digitalWrite(yellow, HIGH);
   delay(del);
   digitalWrite(yellow, LOW);
   digitalWrite(red, HIGH);
   delay(del);
   digitalWrite(red, LOW);
}
