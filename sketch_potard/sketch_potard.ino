const int pinA = 2; 
const int pinB = 3; 
int lastStateA, stateA;
int lastStateB, stateB;

void updateEncoderA() {
  Serial.println("A");
}
void updateEncoder() {
  Serial.println("B");
}

void setup() {
  pinMode(pinA, INPUT);
  pinMode(pinB, INPUT);
  Serial.begin(9600);

  // Attacher une interruption sur la broche A (D2)
  attachInterrupt(digitalPinToInterrupt(pinA), updateEncoderA, CHANGE);
  attachInterrupt(digitalPinToInterrupt(pinB), updateEncoder, CHANGE);

  // Lire l'état initial des pins A et B
  lastStateA = digitalRead(pinA);
  lastStateB = digitalRead(pinB);
}

void loop() {

}