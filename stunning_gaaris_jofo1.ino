char input;
int merah = 3;
int kuning = 5;
int hijau = 6;
int btn1 = 7;
int count = 0;
void setup()
{
  pinMode(merah, OUTPUT);
  pinMode(kuning, OUTPUT);
  pinMode(hijau, OUTPUT);
  pinMode(btn1, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop()
{
  
  int button = digitalRead(btn1);
  
  if(button == LOW){
    if (count ==0){
      Serial.println("LED Merah Menyala !!!");
      digitalWrite(merah, HIGH);delay(5000);
      digitalWrite(kuning, LOW);
      digitalWrite(hijau, LOW);
      count = count+1;
    }
    else if(count ==1){
      Serial.println("LED Kuning Menyala !!!");
      digitalWrite(merah, LOW);;
      digitalWrite(kuning, HIGH);delay(2000);
      digitalWrite(hijau, LOW);
      count = count+1;
    }
    else if(count ==2){
      Serial.println("LED Hijau Menyala !!!");
      digitalWrite(merah, LOW);;
      digitalWrite(kuning, LOW);
      digitalWrite(hijau, HIGH);delay(5000);
      count = count+1;
    }
    else if(count ==3){
      Serial.println("LED Kuning Menyala !!!");
      digitalWrite(merah, LOW);;
      digitalWrite(kuning, HIGH);delay(2000);
      digitalWrite(hijau, LOW);
      count = 0;
    }
  }

  //if(Serial.available()){
  //  input = Serial.read();
  //}
  //if(input == '0'){
  //  digitalWrite(merah, HIGH);
  //  digitalWrite(kuning, LOW);
  //  digitalWrite(hijau, LOW);
  //  Serial.println("LED Merah Menyala !!!");
  //}
  //else if (input == '1'){
  //  digitalWrite(kuning, HIGH);
  //  digitalWrite(merah, LOW);
  //  digitalWrite(hijau, LOW);
  //  Serial.println("LED Kuning Menyala !!!");
  //}
  //else if (input == '2'){
  //  digitalWrite(hijau, HIGH);
  //  digitalWrite(kuning, LOW);
  //  digitalWrite(merah, LOW);
  //  Serial.println("LED Hijau Menyala !!!");
  //}
  //else
  //{
  //  digitalWrite(merah, LOW);
  //  digitalWrite(kuning, LOW);
  //  digitalWrite(hijau, LOW);
  //}
  
  
  //digitalWrite(merah, HIGH);
  //delay(5000);
  //digitalWrite(merah, LOW);
  //delay(10);
  //digitalWrite(kuning, HIGH);
  //delay(1000);
  //digitalWrite(kuning, LOW);
  //delay(10); 
  //digitalWrite(hijau, HIGH);
  //delay(5000);
  //digitalWrite(hijau, LOW);
  //delay(10);
  //digitalWrite(kuning, HIGH);
  //delay(1000);
  //digitalWrite(kuning, LOW);
  //delay(10);
  
}