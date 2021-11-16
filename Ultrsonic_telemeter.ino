//Trigger corresponds to the generation of the measurement pulse, and Echo to the measurement of this pulse, in ms. 
//A series is started with Serial.begin() and the trig output is a series with Serial.begin() and 
//initialize the trig output to low level (LOW) with the digitalWrite().

#define trig 7
#define echo 8

float d, tmps; 

void setup() {
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(9600);
  digitalWrite(trig, LOW);
}

void loop() {
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  tmps = pulseIn(echo, HIGH);
  tmps = tmps/2;
  d = 35360*tmps/1e6;
  Serial.println(d); //in cm
  Serial.println("");
  delay(1000);
}
//In our main program, we launch an ultra-sound by setting our Trigger to HIGH, then a delay of 10 ms before setting it back to LOW. 
//We define a tmps corresponding to the return of the ultrasound with pulseIn() and Echo as parameters, at high level.
//The pulseIn() function will measure a round trip, so we must divide our tmps variable by two to obtain the time of a round trip. 
//Finally, we calculate the distance d as the speed of sound multiplied by the time, all over 16 in order to obtain cm.
