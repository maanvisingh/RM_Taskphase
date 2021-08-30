const byte right=13;
const byte left=12;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(9,INPUT);
pinMode(8,INPUT);
pinMode(7,INPUT);
pinMode(6,INPUT);
pinMode(5,INPUT);
pinMode(4,INPUT);
pinMode(3,INPUT);
pinMode(2,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int one=digitalRead(9);
int two=digitalRead(8);
int three=digitalRead(7);
int four=digitalRead(6);
int five=digitalRead(5);
int six=digitalRead(4);
int seven=digitalRead(3);
int eight = digitalRead(2);

if(one==HIGH)
{
  Serial.println("1 is on");
}
if (two==HIGH)
{
  Serial.println("2 is on");
}

if (three==HIGH)
{
  Serial.println("3 is on");
}

if (four==HIGH)
{
  Serial.println("4 is on");
}

if (five==HIGH)
{
  Serial.println("5 is on");
}

if (six==HIGH)
{
  Serial.println("6 is on");
}

if (seven==HIGH)
{
  Serial.println("7 is on");
}

if (eight==HIGH)
{
  Serial.println("8 is on");
}

}
