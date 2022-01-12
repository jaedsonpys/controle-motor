#define motorControl 3
#define potenciometer A0

void setup() {
    Serial.begin(115200);
  
    pinMode(motorControl, OUTPUT);
    pinMode(potenciometer, INPUT);
};

void loop() {
    int value = analogRead(potenciometer);
    analogWrite(motorControl, value);
    Serial.println(value);
}