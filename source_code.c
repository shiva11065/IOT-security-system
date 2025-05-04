int pirSensor = 2;      // PIR sensor connected to digital pin 2
int ledPin = 13;        // LED connected to digital pin 13
int buzzerPin = 12;     // Buzzer connected to digital pin 12
int sensorState = 0;    // Variable to store the sensor status

void setup() {
  pinMode(pirSensor, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  sensorState = digitalRead(pirSensor);
  
  if (sensorState == HIGH) {
    digitalWrite(ledPin, HIGH);
    digitalWrite(buzzerPin, HIGH);
    Serial.println("Motion Detected!");
  } else {
    digitalWrite(ledPin, LOW);
    digitalWrite(buzzerPin, LOW);
  }
  
  delay(100);
}
