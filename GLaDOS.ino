#include <VarSpeedServo.h>
#include <Adafruit_NeoPixel.h>

//servos
VarSpeedServo servo;
VarSpeedServo servo2;
VarSpeedServo servo3;
VarSpeedServo servo4;

//LEDs
#define BLEDs 8
#define HLEDs 1 
Adafruit_NeoPixel base = Adafruit_NeoPixel(BLEDs, 7, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel head = Adafruit_NeoPixel(HLEDs, 6, NEO_GRB + NEO_KHZ800);


void setup() {
  Serial.begin(9600);
  
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT); 
    
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, INPUT);
  
  //setup servos
  servo.attach(8);
  servo2.attach(9);
  servo3.attach(10);
  servo4.attach(11);
  
  //initialize LEDs
  base.begin();
  head.begin();
  head.setBrightness(50);
  head.setPixelColor(0, 255, 200, 50);
  head.show();
  
  endingSpeech();
      
}

void loop() {
  
}

void endingSpeech(){
  //0:10
  servo.write(20);
  servo2.write(30);
  servo3.write(95);
  servo4.write(25);
  for(int t = 0; t < 8; t++){
    base.setPixelColor(t, 255, 255, 255);
    base.show();
    delay(100);
  }
  Serial.println("0:10");
  //0:11
  delay(1000);
  servo.write(90, 50);
  Serial.println("0:11");
  //0:12
  delay(100);
  servo3.write(95);
  servo4.write(120, 50);
  // "Oh thank god you're all right"
  delay(500);
  servo3.write(90);
  servo4.write(25, 50);
  delay(400);
  Serial.println("0:12");
  //0:13
  delay(1000);
  servo2.write(10, 240);
  Serial.println("0:13");
  //0:14
  delay(1000);
  Serial.println("0:14");
  //0:15
  servo.write(150, 50);
  servo4.write(120, 150);
  delay(200);
  servo3.write(45, 150);
  delay(800);
  Serial.println("0:15");
  //0:16
  delay(1000);
  Serial.println("0:16");
  //0:17
  servo3.write(90, 100);
  delay(1000);
  Serial.println("0:17");
  //0:18
  servo.write(90, 50);
  delay(500);
  servo2.write(90, 100);
  delay(500);
  Serial.println("0:18");
  //0:19
  servo2.write(10, 150);
  delay(1000);
  Serial.println("0:19");
  //0:20
  servo4.write(25, 60);
  delay(1000); 
  Serial.println("0:20");
  //0:21
  delay(1000);
  //0:22
  servo4.write(120, 60);
  servo2.write(90, 130);
  delay(1000);
  //0:23
  delay(1000);
  //0:24
  servo.write(150, 50);
  servo2.write(10, 100);
  servo3.write(60, 60);
  delay(1000);
  //0:25
  delay(1000);
  //0:26
  servo3.write(90, 60);
  delay(1000);
  //0:27
  servo.write(90, 50);
  delay(200);
  servo3.write(115, 100);
  delay(200);
  servo2.write(90, 60);
  delay(600);
  //0:28
  servo2.write(10, 60);
  delay(1000);
  //0:29
  delay(1000);
  //0:30
  servo2.write(100, 50);
  servo3.write(120, 50);
  //0:31
  delay(1000);
  //0:32
  servo4.write(30, 100);
  servo2.write(30, 60);
  //0:33
  delay(1000);
  //0:34
  delay(600);
  servo2.write(0, 50);
  servo3.write(105, 30);
  delay(400);
  //0:35
  for(int t = 0; t < 8; t++){
    base.setPixelColor(t, 255, 0, 0);
    base.show();
  }
  //0:36
  delay(1000);
  //0:37
  servo3.write(90, 30);
  delay(200);
  servo3.write(60, 30);
  servo.write(150, 30);
  delay(1000);
  //0:38
  delay(1000);
  //0:39
  //0:40
  //0:41
  //0:42
  //0:43
  //0:44
  //0:45
  //0:46
  //0:47
  //0:48
  //0:49
  //0:50
  
  servo.write(20, 50);
  servo2.write(30);
  servo3.write(95);
  servo4.write(25);
  delay(1500);
  head.setPixelColor(0, 255, 200, 50);
  head.show();
  for(int t = 0; t < 8; t++){
    base.setPixelColor(t, 255, 255, 255);
    base.show();
    delay(600);
  }
  delay(2000);
  head.setPixelColor(0, 255, 200, 50);
  head.show();
  for(int t = 0; t < 8; t++){
    base.setPixelColor(t, 255, 255, 255);
    base.show();
    delay(600);
  }
  servo2.write(180);
  servo3.write(45);
  
} 

void test(VarSpeedServo x, int ang1, int ang2){
  x.write(ang1, 255);
  delay(1000);
  x.write(ang2, 255);
}



