
#define echoPin 8
#define trigPin 9 
#define valve1 30 
#define valve2 31
#define valve3 32
#define valve4 33
#define valve5 34
#define valve6 35 
#define valve7 36
#define valve8 37
#define valve9 38
#define valve10 39
#define valve11 40 
#define valve12 41
#define valve13 42
#define valve14 43
#define valve15 44


long duration; 
int distance; 

unsigned long turnOn = 1500; 

unsigned long buttonPushedMillis; 
unsigned long ledTurnedOnAt; 
unsigned long turnOnDelay = 0; 
unsigned long turnOffDelay = 5000; 
unsigned long currentMillis;

bool ledReady = false; 
bool ledState = false; 

void setup() {
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT); 
  pinMode(valve1, OUTPUT);
  pinMode(valve2, OUTPUT);
  pinMode(valve3, OUTPUT);
  pinMode(valve4, OUTPUT);
  pinMode(valve5, OUTPUT);
  pinMode(valve6, OUTPUT);
  pinMode(valve7, OUTPUT);
  pinMode(valve8, OUTPUT);
  pinMode(valve9, OUTPUT);
  pinMode(valve10, OUTPUT);
  pinMode(valve11, OUTPUT);
  pinMode(valve12, OUTPUT);
  pinMode(valve13, OUTPUT);
  pinMode(valve14, OUTPUT);
  pinMode(valve15, OUTPUT);
  Serial.begin(9600);
}
void check() {
  
do{
  

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH); 
  distance = duration * 0.034 / 2; 
  Serial.println(distance);
  
  currentMillis = millis(); 
  if (distance < 100 ) {
  buttonPushedMillis = currentMillis;
  ledReady = true;
 }
 if (ledReady) {
   if ((currentMillis - buttonPushedMillis) >= turnOnDelay) {
    digitalWrite(valve1, HIGH);
    Serial.println("Offfffff");
    delay(50);
    digitalWrite(valve2, HIGH);
    delay(50);
    digitalWrite(valve3, HIGH);
    delay(50);
    digitalWrite(valve4, HIGH);
    delay(50);
    digitalWrite(valve5, HIGH);
    delay(50);
    digitalWrite(valve6, HIGH);
    delay(50);
    digitalWrite(valve7, HIGH);
    delay(50);
    digitalWrite(valve8, HIGH);
    delay(50);
    digitalWrite(valve9, HIGH);
    delay(50);
    digitalWrite(valve10, HIGH);  
    delay(50);  
    digitalWrite(valve11, HIGH);
    delay(50);
    digitalWrite(valve12, HIGH);
    delay(50);
    digitalWrite(valve13, HIGH);
    delay(50);
    digitalWrite(valve14, HIGH);
    delay(50);
    digitalWrite(valve15, HIGH);
    delay(50);
     ledState = true;
     ledTurnedOnAt = currentMillis;
     ledReady = false;    
   }
 } 
    if (ledState) {
   if ((currentMillis - ledTurnedOnAt) >= turnOffDelay) {
     ledState = false;
    
      
   }
 }
}while(ledState == true);
} 
void loop() 
{
  Serial.println("ONNNNNNNN");
 digitalWrite(valve1, LOW);

 delay(500);
check();

    digitalWrite(valve2, LOW);
delay(100);
check();
    digitalWrite(valve3, LOW);
    delay(100);
check();
    digitalWrite(valve4, LOW);
    delay(100);
check();
    digitalWrite(valve5, LOW);
    delay(100);
check();
    digitalWrite(valve6, LOW);
    delay(100);
check();
    digitalWrite(valve7, LOW);
    delay(100);
check();
    digitalWrite(valve8, LOW);
    delay(100);
check();
    digitalWrite(valve9, LOW);
    delay(100);
check();
    digitalWrite(valve10, LOW);  
    delay(100);
check();  
    digitalWrite(valve11,LOW);
    delay(100);
check();
    digitalWrite(valve12, LOW);
    delay(100);
check();
    digitalWrite(valve13, LOW);
    delay(100);
check();
    digitalWrite(valve14, LOW);
    delay(100);
check();
    digitalWrite(valve15, LOW);  
    delay(100);
check();
}
