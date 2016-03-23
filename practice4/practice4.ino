/*
* Name:      practice4.ino
* Created:   2016/03/23
* Author:    choco-mint-ice
* Operation: センサーの値によってLEDのオンオフを切り替えるプログラム
*/

const int LED = 11;			//LEDを接続するピンの番号
const int SENSOR = 0;		//Cdsセンサーを接続するアナログピンの番号
int sensorState = 0;		//Cdsセンサーの値を記憶する変数
const int THRESHOLD = 700;	//手をかざした時とかざしてないときの境界（しきい値）

// the setup function runs once when you press reset or power the board
void setup() {
  
	pinMode(LED, OUTPUT);	//LEDピンを出力に設定
	//アナログピンは自動的に入力に設定される
	Serial.begin(9600); //シリアル通信を開始
 
}

// the loop function runs over and over again until power down or reset
void loop() {
  
	sensorState = analogRead(SENSOR);	//センサーのピンの値を変数に代入
	Serial.println(sensorState);		  //センサーの値をシリアルモニターに表示
	
	if (sensorState > THRESHOLD) {		//センサーの値がしきい値より高いとき(明るいとき)
		digitalWrite(LED, LOW);//LEDを消灯
	}
	else {								            //センサーの値がしきい値より低いとき
		digitalWrite(LED, HIGH); //LEDを点灯
	}
}
