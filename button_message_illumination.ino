const int bt1 = 2;
const int bt2 = 7;
const int sensor = A0;

void setup() {
  Serial.begin(9600);
  pinMode(bt1, INPUT);
  pinMode(bt2, INPUT);
}

void loop() {
  // 버튼 1을 눌렸을 때 "테스트 시작" 출력
  if (digitalRead(bt1) == HIGH) {
    Serial.println("테스트 시작");
    delay(1000);
    int analogValue=analogRead(sensor);
    Serial.println(analogValue);
  }
  // 버튼 2를 눌렸을 때 "테스트 종료" 출력
  if (digitalRead(bt2) == HIGH) {
    Serial.println("테스트 종료");
    delay(1000);
  }
}
