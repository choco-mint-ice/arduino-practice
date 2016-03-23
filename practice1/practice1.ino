/*
 * Name:      practice1.ino
 * Created:   2016/03/23
 * Author:    choco-mint-ice
 * Operation: LEDを点滅させるプログラム
 */
 
const int LED = 13;      //LEDを接続するピンの番号

// the setup function runs once when you press reset or power the board
void setup() {//一度だけ実行される

  pinMode(LED, OUTPUT); //デジタルピンを出力に設定

}

// the loop function runs over and over again until power down or reset
void loop() {//繰り返し実行される

  digitalWrite(LED, HIGH);  //LEDを点灯させる [5V]
  delay(500);               //点灯時間[ms]

  digitalWrite(LED, LOW);   //LEDを消灯させる [0V]
  delay(100);               //消灯時間[ms]

}
