//pin
int redPin = 2;
int yellowPin = 3;
int greenPin = 4;
int button = 5;
int readButton = 0;
//delay
int del1 = 3000;
int del2 = 5000;

void setup()
{
    pinMode(redPin, OUTPUT);
    pinMode(yellowPin, OUTPUT);
    pinMode(greenPin, OUTPUT);
    pinMode(button, INPUT);
}

void loop()
{
    readButton = digitalRead(button);

    if (readButton == 0)
    {
        digitalWrite(greenPin, HIGH);
    }
    else if (readButton == 1)
    {
        digitalWrite(greenPin, LOW);
        digitalWrite(yellowPin, HIGH);
        delay(del1);
        digitalWrite(yellowPin, LOW);
        digitalWrite(redPin, HIGH);
        delay(del2);
        digitalWrite(redPin, LOW);
    }
}