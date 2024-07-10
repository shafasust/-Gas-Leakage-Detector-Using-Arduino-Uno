// GAS DETECTOR
int Input = A0;
int R_LED = 2;
int Buzzer = 4;
// VAL INTEGER
int val;
int MAX = 450;

void setup() {
  Serial.begin(2400);
  pinMode(Input ,INPUT);
  pinMode(R_LED ,OUTPUT);
  pinMode(Buzzer ,OUTPUT);
}

void loop() {
  val = analogRead(A0);
  if (val >= MAX) {
    digitalWrite(R_LED ,HIGH);
    digitalWrite(Buzzer ,HIGH);
    Serial.println("GAS LEAKING");
    Serial.println(val);
  }
  else {
    digitalWrite(R_LED ,LOW);
    digitalWrite(Buzzer ,LOW);
    Serial.println("NORMAL");
    Serial.println(val);
  }
}
