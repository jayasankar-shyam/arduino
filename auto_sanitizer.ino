#include <Servo.h>
Servo myservo;
int servoPin = 3;
int trig = 12;
int echo = 11;
void setup()
{
    myservo.attach(servoPin);
    pinMode(trig, OUTPUT);
    pinMode(echo, INPUT);
    Serial.begin(9600);
}

void loop()
{
    long distance, duration;

    digitalWrite(trig, LOW);
    delayMicroseconds(2);
    digitalWrite(trig, HIGH);
    delayMicroseconds(10);
    digitalWrite(trig, LOW);
    duration = pulseIn(echo, HIGH);
    distance = duration / 29 / 2;
    Serial.print("Distance =");
    Serial.print(distance);
    Serial.print("cm");
    Serial.println();

    if (distance < 20)
    {
        myservo.write(90);
        Serial.println("ON");
    }
    else
    {
        myservo.write(0);
        Serial.println("OFF");
    }
}