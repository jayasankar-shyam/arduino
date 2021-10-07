
int redPin = 2;
int yellowPin = 3;
int greenPin = 4;
int del1 = 3000;
int del2 = 5000;

void setup()
{
    pinMode(redPin, OUTPUT);
    pinMode(yellowPin, OUTPUT);
    pinMode(greenPin, OUTPUT);
}

void loop()
{
    digitalWrite(greenPin, HIGH);
    delay(del2);
    digitalWrite(greenPin, LOW);
    digitalWrite(yellowPin, HIGH);
    delay(del1);
    digitalWrite(yellowPin, LOW);
    digitalWrite(redPin, HIGH);
    delay(del2);
    digitalWrite(redPin, LOW);
}