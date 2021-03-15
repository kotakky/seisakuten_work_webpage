const int MOTER_A = 4;   //IN3
const int MOTER_B = 3;   //IN4
const int LED_White = 12;   //
const int LED_Orange = 11;   


void setup() {
  pinMode(MOTER_A, OUTPUT);  //MOTER_Aを出力に設定（移動の方向を指定）
  pinMode(MOTER_B, OUTPUT);  //MOTER_Bを出力に設定（duty比) 0~255
  pinMode(LED_White, OUTPUT); //白
  pinMode(LED_Orange,OUTPUT); //オレンジ
}

  void loop() {

  int a = 0;
  int b = 0;

  digitalWrite(MOTER_A, HIGH);  //モーターを右に動かす
  analogWrite(MOTER_B, 50);
  delay(1000);  
  
  for (a = 0; a <= 255; a++)  //LED_White点灯
  {
    analogWrite(LED_White, a);
    delay(10);                //光がつくまでの時間（もっと遅いかも）
  }
 
  delay(1000);                //LED_Whiteのずっとついている時間

  for (b = 0; b <= 255; b++)  //LED_Orange点灯
  {
    analogWrite(LED_Orange, b);
    delay(10);
  }
  
  delay(1000);                 //LED_Whiteのずっとついている時間

  digitalWrite(MOTER_A, LOW);    //モーターを左に動かす
  analogWrite(MOTER_B, 50);
  delay(1000);

  for (a = 255; a >= 0; a--)   //LED_White消灯
  {
    analogWrite(LED_White, a);
    delay(10);
  }
  delay(1000);                 //LED_Orangeのずっとついている時間

  for (b = 255; b >= 0; b--)  //LED_Orange点灯
  {
    analogWrite(LED_Orange, b);
    delay(50);
  }
     
  }

//****************************************
