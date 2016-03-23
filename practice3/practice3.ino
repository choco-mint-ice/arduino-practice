/*
 * Name:      practice3.ino
 * Created:   2016/03/23
 * Author:    choco-mint-ice
 * Operation: LEDの明るさを変えるプログラム
 */

const int LED = 11;		  //LEDを接続するピンの番号(PWM使用）
int brightness = 255;		//LEDの明るさ 0 ～ 255(255が最も明るい)

void setup() {
  
	pinMode(LED, OUTPUT); //LEDピンを出力に設定
}

void loop() {
  
  for (brightness = 0; brightness < 255; brightness++) {
  //徐々に明るくする。(フェードイン)
  analogWrite(LED, brightness); //brightnessの明るさで点灯
  delay(10);              //明るくなる速度を調整
  }

  for(brightness = 255; brightness >= 0; brightness--){
  //徐々に暗くする。(フェードアウト) 
  analogWrite(LED, brightness); //brightnessの明るさで点灯
  delay(10);              //暗くなる速度を調整
  }
}
