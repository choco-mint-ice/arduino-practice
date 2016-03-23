/*
 * Name:      practice2.ino
 * Created:   2016/03/23
 * Author:    choco-mint-ice
 * Operation: スイッチを押したらLEDが点灯するプログラム
 */

const int LED = 13;		//LEDを接続するピン番号
const int BUTTON = 7;	//ボタンを接続するピン番号
int buttonState = 0;	//ボタンの状態を記憶する変数

// the setup function runs once when you press reset or power the board
void setup() {
  
	pinMode(LED, OUTPUT);	   //LEDピンを出力に設定
	pinMode(BUTTON, INPUT);	 //BUTTONピンを入力に設定(プルアップ)
  
}

// the loop function runs over and over again until power down or reset
void loop() {
  
	buttonState = digitalRead(BUTTON);	//BUTTONピンの状態を取得
  
	if (buttonState == LOW) {	//BUTTONが押されたとき
		digitalWrite(LED, HIGH);//LEDを点灯する
	}
	else {						        //BUTTONが離されたとき
		digitalWrite(LED, LOW);	//LEDを消灯する
	}
 
}
