void setup() {
    pinMode(1, OUTPUT);
    pinMode(2, OUTPUT);
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
}
 
void loop() {
    int time = 200;
    int i = 1;
    int r = 5;
    for (i;i < 7;i++){
        digitalWrite(i,HIGH);
        delay(time);
        digitalWrite(i,LOW);
    }
    for (r;r < 1;r--){
        digitalWrite(i,HIGH);
        delay(time);
        digitalWrite(i,LOW);
    }
}