long n;
long s1;
long s2;
long s3;
long s4;
long s5;
long s6;
long s7;
long s8;
long time1;
long time2;
long time3;
long time4;
long time5;
long time6;
long time7;
long time8;
void setup() {
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(18, INPUT_PULLUP);
}

void loop() {
  n = random(1, 7);
  s1 = random(5, 11);
  s2 = random(5, 11);
  s3 = random(5, 11);
  s4 = random(5, 11);
  s5 = random(5, 11);
  s6 = random(5, 11);
  s7 = random(5, 11);
  s8 = random(5, 11);
  time1 = random(100, 300);
  time2 = random(100, 300);
  time3 = random(100, 300);
  time4 = random(100, 300);
  time5 = random(100, 300);
  time6 = random(100, 300);
  time7 = random(100, 300);
  time8 = random(100, 300);  
  if (digitalRead(18) == HIGH) 
  {
  return;
  }
  {
  digitalWrite(s1, HIGH);
  delay(time1);
  digitalWrite(s2, HIGH);
  delay(time2);
  digitalWrite(s3, HIGH);
  delay(time3);
  digitalWrite(s4, HIGH);
  delay(time4);
  digitalWrite(s5, HIGH);
  delay(time5);
  digitalWrite(s6, HIGH);
  delay(time6);
  digitalWrite(s7, HIGH);
  delay(time7);
  digitalWrite(s8, HIGH);
  delay(time8);  
  digitalWrite(s1, LOW);
  delay(time1);
  digitalWrite(s2, LOW);
  delay(time2);
  digitalWrite(s3, LOW);
  delay(time3);
  digitalWrite(s4, LOW);
  delay(time4);
  digitalWrite(s5, LOW);
  delay(time5);
  digitalWrite(s6, LOW);
  delay(time6);  
  digitalWrite(s7, LOW);
  delay(time7);
  digitalWrite(s8, LOW);
  delay(time8);   
    
  digitalWrite(s1, HIGH);
  delay(time1);
  digitalWrite(s2, HIGH);
  delay(time2);
  digitalWrite(s3, HIGH);
  delay(time3);
  digitalWrite(s7, HIGH);
  delay(time7);
  digitalWrite(s8, HIGH);
  delay(time8);  
  digitalWrite(s1, LOW); 
  delay(time1); 
  digitalWrite(s2, LOW);
  delay(time2);
  digitalWrite(s7, LOW);
  delay(time7);
  digitalWrite(s8, LOW);
  delay(time8);  
  digitalWrite(s3, LOW);  
  digitalWrite(s4, HIGH);
  delay(time4);
  digitalWrite(s5, HIGH);
  delay(time5);
  digitalWrite(s6, HIGH);
  delay(time6);
  digitalWrite(s4, LOW);
  delay(time6);
  digitalWrite(s5, LOW);
  delay(time5);
  digitalWrite(s6, LOW);

  digitalWrite(s1, HIGH);
  delay(time1);
  digitalWrite(s2, HIGH);
  delay(time2);
  digitalWrite(s3, HIGH);
  delay(time3);
  digitalWrite(s7, HIGH);
  delay(time7);
  digitalWrite(s8, HIGH);
  delay(time8);  
  digitalWrite(s1, LOW); 
  delay(time1); 
  digitalWrite(s2, LOW);
  delay(time2);
  digitalWrite(s7, LOW);
  delay(time7);
  digitalWrite(s8, LOW);
  delay(time8);  
  digitalWrite(s3, LOW);
  
  digitalWrite(s2, HIGH);
  delay(time2);
  digitalWrite(s3, HIGH);
  delay(time3);
  digitalWrite(s4, HIGH);
  delay(time2);
  digitalWrite(s2, LOW); 
  delay(time3); 
  digitalWrite(s3, LOW);
  delay(time4);
  digitalWrite(s4, LOW);
  digitalWrite(s4, HIGH);
  delay(time4);
  digitalWrite(s5, HIGH);
  delay(time5);
  digitalWrite(s6, HIGH);
  delay(time6);
  digitalWrite(s4, LOW); 
  delay(time4); 
  digitalWrite(s5, LOW);
  delay(time5);
  digitalWrite(s6, LOW);               
  
  delay(3000);
  for (int i = 0; i <= n - 1; i++)
    {
    digitalWrite(i + 5, HIGH);
    delay(200);      
    }  
  delay(2000);
  for (int i = n; i > -1; i--)
    {
    digitalWrite(i + 5, LOW);
    delay(200);      
    }
  }
  while (digitalRead(18) == LOW) 
  {
  delay(10);
  }  
}