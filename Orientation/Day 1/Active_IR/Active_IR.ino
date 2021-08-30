int outputPin = 7;
int output;

void setup()
{
  Serial.begin(9600);
  pinMode(outputPin, OUTPUT);
}

void loop()
{
  output = digitalRead(outputPin);
  
  if(output == 1)
    Serial.println("No Obstacle");
  else
    Serial.println("STOP");
}
