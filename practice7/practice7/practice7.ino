//モータードライバーでモータを動かすプログラム
const int pin[2] = {11, 10};
void forward();
void reverse();
void stop();
void forward(int t){
  digitalWrite(pin[0], HIGH);
  digitalWrite(pin[1], LOW);
  delay(t);
}
void reverse(int t){
  digitalWrite(pin[0], LOW);
  digitalWrite(pin[1], HIGH);
  delay(t);
}
void stop(int t){
  digitalWrite(pin[0], LOW);
  digitalWrite(pin[1], LOW);
  delay(t);
}
void setup() {
  // put your setup code here, to run once:
  for(int i=0; i<2; i++){
    pinMode(pin[i], OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  forward(5000);
  stop(1000);
  reverse(2000);
  stop(1000);
}
