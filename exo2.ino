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
  Serial.println(d); //en cm
  Serial.println("");
  delay(1000);
}
