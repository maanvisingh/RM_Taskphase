int TrigPin1 = 2;
int EchoPin1 = 4;
double duration;
int d1;

void setup()
{
  pinMode(TrigPin1, OUTPUT);
  pinMode(EchoPin1, INPUT);
  Serial.begin(9600);
}

int CalculateDistance(int TrigPin, int EchoPin)
{
  digitalWrite(TrigPin, LOW);
  digitalWrite(TrigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(TrigPin, LOW);
  
  duration = pulseIn(EchoPin, HIGH);
  int distance = (duration*0.0343)/2; //distance in cm
  return distance;
}

void loop()
{
  d1 = CalculateDistance(TrigPin1, EchoPin1);
  Serial.println(d1);
}
