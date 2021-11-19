int motor1a  = 11;
int motor1b = 10;
int motor2a = 9;
int motor2b = 3;

void setup() {
  pinMode(motor1a,OUTPUT);
  pinMode(motor1b,OUTPUT);
  pinMode(motor2a,OUTPUT);
  pinMode(motor2b,OUTPUT);
  Serial.begin(9600);
}

void loop() {
    
    for(int i = 0; i<10000; i++){
    analogWrite(motor1a, 100);// derecha
    analogWrite(motor1b, 0);
    analogWrite(motor2a, 100);// izquierda
    analogWrite(motor2b, 0);
    }
    
}
