const int LED = 13;

void setup()
{
    pinMode(LED, OUTPUT);
    Serial.begin(9600);
}

byte inputData;
void loop()
{
    if (Serial.available() > 0)
    {
        inputData = Serial.read();
        switch (inputData)
        {
        case '[0.]': //Focus
            digitalWrite(LED, LOW);
            Serial.println("turn off");
            break;
        case '[1.]': //Relax
            digitalWrite(LED, HIGH);
            Serial.println("turn on");
            break;
        default:
            break;
        }
    }
}
