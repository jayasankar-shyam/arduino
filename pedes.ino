int redPin = 2;
int yellowPin = 3;
int greenPin = 4;
int buttonPin = 5;
int readButton = 0;
int del = 7000;

void setup()
{
    pinMode(redPin, OUTPUT);
    pinMode(yellowPin, OUTPUT);
    pinMode(greenPin, OUTPUT);
    pinMode(buttonPin, INPUT);
}

void loop()
{

    readButton = digitalRead(buttonPin);
    if (readButton == 0)
    {
        digitalWrite(greenPin, HIGH);
        digitalWrite(yellowPin, LOW);
        digitalWrite(redPin, LOW);
    }
    else if (readButton == 1)
    {
        digitalWrite(greenPin, LOW);
        digitalWrite(yellowPin, HIGH);
        delay(2000);
        digitalWrite(yellowPin, LOW);
        digitalWrite(redPin, HIGH);
        delay(6000);
    }
}