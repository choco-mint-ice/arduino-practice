/*
* Name:       practice5.ino
* Created:    2016/03/23
* Author:     choco-mint-ice
* Operation:  Cdsセンサーに手をかざすとLEDが光り，
              LEDが時間とともに暗くなっていくプログラム
              (Cdsは明るいとき抵抗が小さくなり，暗いとき抵抗が大きくなる)
*/

const int LED = 11;			//LEDを接続するピンの番号
const int SENSOR = 0;		//センサーを接続するアナログピンの番号
int sensorState = 0;		//センサーの値を記憶する変数
const int THRESHOLD = 700;//手をかざした時とかざしてないときの境界（しきい値）
int brightness = 255;		//LEDの明るさ 0 ～ 255(255が最も明るい)
const int INTERVAL = 10;	//暗くなる速度を調整する[ms]

// the setup function runs once when you press reset or power the board
void setup() {
  
	pinMode(LED, OUTPUT);	//LEDピンを出力に設定
	Serial.begin(9600);  //シリアル通信を開始
 
}

// the loop function runs over and over again until power down or reset
void loop() {
  
	sensorState = analogRead(SENSOR);	//センサーのピンの値を変数に代入
	Serial.println(sensorState);		  //センサーの値をシリアルモニターに表示
  
	if (sensorState < THRESHOLD) {//センサーの値がしきい値より小さいとき
		for (brightness = 255; brightness >= 0; brightness--) {
	  //徐々に暗くする。(フェードアウト)
   
			analogWrite(LED, brightness);	//brightnessの明るさで点灯
			delay(INTERVAL);				      //暗くなる速度を調整
		}
	}
	else {
		digitalWrite(LED, LOW);//LEDを消灯
	}
}
