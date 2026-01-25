void setup() {
  // put your setup code here, to run once:


}

void loop() {
  // put your main code here, to run repeatedly:
  increment();
  delay(10);
  decrement();

}

void increment(){
  for(int i= 0;i <= 255 ;i++){
    analogWrite(3 , i);
    delay(10);
  }
}

void decrement(){
  for(int j= 0;j >= 255 ;j--){
    analogWrite(5 , j);
    delay(10);
  }
}

