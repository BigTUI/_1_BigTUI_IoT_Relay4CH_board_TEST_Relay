//test upload to github
//https://github.com/BigTUI/_1_BigTUI_IoT_Relay4CH_board_TEST_Relay

#include <Wire.h>
#define LED1 14 // D5
#define LED2 12 //D6
#define LED3 13 //D7
#define LED4 15 //D8
#define BuiltinLED 2
#define TimeDelay 2000

void setup()
{
  Serial.begin(9600);
  Serial.println();
  Serial.println("BigTUI IoT Relay 4 Channels Tester.");
  Serial.println("http://bigtui.exxteen.com");
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(BuiltinLED, OUTPUT);
  digitalWrite(LED1, LOW); // ไฟดับ
  digitalWrite(LED2, LOW); // ไฟดับ
  digitalWrite(LED3, LOW); // ไฟดับ
  digitalWrite(LED4, LOW); // ไฟดับ
  Serial.print("LED1=D5=GPIO"); Serial.println(LED1);
  Serial.print("LED2=D6=GPIO"); Serial.println(LED2);
  Serial.print("LED3=D7=GPIO"); Serial.println(LED3);
  Serial.print("LED4=D8=GPIO"); Serial.println(LED4);
  digitalWrite(BuiltinLED, HIGH); // ไฟดับ
}

void loop()
{
  delay(TimeDelay);
  Serial.begin(115200);
  Serial.println();
  digitalWrite(LED1, HIGH); // ไฟติด
  Serial.print("LED1= ON , Pin ="); Serial.println(LED1);
  delay(TimeDelay);
  digitalWrite(LED2, HIGH);
  Serial.print("LED2= ON , Pin ="); Serial.println(LED2);
  delay(TimeDelay);
  digitalWrite(LED3, HIGH);
  Serial.print("LED3= ON , Pin ="); Serial.println(LED3);
  delay(TimeDelay);
  digitalWrite(LED4, HIGH);
  Serial.print("LED4= ON , Pin ="); Serial.println(LED4);
  delay(TimeDelay);
  digitalWrite(BuiltinLED, LOW); // ไฟดับ
  delay(TimeDelay);
  digitalWrite(BuiltinLED, HIGH); // ไฟดับ
  delay(TimeDelay);
  digitalWrite(BuiltinLED, LOW); // ไฟดับ
  delay(TimeDelay);
  digitalWrite(BuiltinLED, HIGH); // ไฟดับ
  delay(TimeDelay);
  digitalWrite(LED1, LOW); // ไฟดับ
  Serial.print("LED1= OFF , Pin ="); Serial.println(LED1);
  delay(TimeDelay);
  digitalWrite(LED2, LOW); // ไฟดับ
  Serial.print("LED2= OFF , Pin ="); Serial.println(LED2);
  delay(TimeDelay);
  digitalWrite(LED3, LOW); // ไฟดับ
  Serial.print("LED3= OFF , Pin ="); Serial.println(LED3);
  delay(TimeDelay);
  digitalWrite(LED4, LOW); // ไฟดับ
  Serial.print("LED4= OFF , Pin ="); Serial.println(LED4);
  delay(TimeDelay);
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, HIGH);
  Serial.println("LED1,2,3,4= ON");
  delay(TimeDelay);
  digitalWrite(LED1, LOW); // ไฟดับ
  digitalWrite(LED2, LOW); // ไฟดับ
  digitalWrite(LED3, LOW); // ไฟดับ
  digitalWrite(LED4, LOW); // ไฟดับ
  Serial.println("LED1,2,3,4= OFF"); 
  delay(TimeDelay);

}
