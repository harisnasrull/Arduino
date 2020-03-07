int in1 = 9;
int in2 = 8;
int enB = 7;
int in3 = 3;
int in4 = 5;
int enA = 6;
char input;
void setup()
{
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if(Serial.available()){
    input = Serial.read();
  }
  //Maju
  if(input == 'w'){
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(enA, 200);
  analogWrite(enB, 200);
  }
  //Mundur
  else if(input == 's'){
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  analogWrite(enA, 200);
  analogWrite(enB, 200);
  }
  //Belok Kanan
  else if(input == 'd'){
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  analogWrite(enA, 200);
  analogWrite(enB, 200);
  }
  //Belok Kiri
  else if(input == 'a'){
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(enA, 200);
  analogWrite(enB, 200);
  }
  //Putar Kanan
  else if(input == 'r'){
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  analogWrite(enA, 200);
  analogWrite(enB, 200);
  }
  //Putar Kiri
  else if(input == 'e'){
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(enA, 200);
  analogWrite(enB, 200);
  }
  //Stop
  else if(input == 'x'){
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  analogWrite(enA, 0);
  analogWrite(enB, 0);
  }
}