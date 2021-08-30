const byte analogPin = 0;   // Connect AN output of LSA08 to analog pin 0
const byte junctionPulse = 4;   // Connect JPULSE of LSA08 to pin 4
int readVal=0,positionVal;    // Variables to store analog and line position value
unsigned int junctionCount = 0;   // Variable to store junction count value

void setup() {
  pinMode(junctionPulse,INPUT);
  pinMode(analogPin,INPUT);
  // Setting the initial condition of motors
  // make sure both PWM pins are LOW
  Serial.begin(9600);
  // State of DIR pins are depending on your physical connection
  // if your robot behaves strangely, try changing thses two values
}

void loop() {
  // Checking for junction crossing, if juction detected, 
  // keep moving forward
  
//  if(digitalRead(junctionPulse)) {
//    while(digitalRead(junctionPulse)) {
//      Serial.println("Forward");
//    }
//    // Increment junction count by 1 after the junction
//    // You can do whatever you want with the junction count
//    junctionCount++;
//  }
int x=digitalRead(junctionPulse);
Serial.println(x);
  readVal = analogRead(analogPin); 
  positionVal = ((float)readVal/921)*70;
  //Serial.println(readVal);
  Serial.println(positionVal);
  // Line at left when 0 - 18, move left
  if(positionVal <= 25)
  Serial.println("Left");

  // Line at middle when 19 - 52, move forward
  else if(positionVal <= 52)
  Serial.println("Forward");

  // Line at right when 53 - 70, move right
  else if(positionVal <= 60)
  Serial.println("Right");
delay(500);

}
