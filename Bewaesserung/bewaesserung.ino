int HUMI = 4; //relay
int sense_Pin = 0; // Analog pin A0 is connected to sensor input.
float value = 0;

void setup() {
  Serial.begin(9600);
  pinMode(HUMI, OUTPUT);
  pinMode(sense_Pin, INPUT);
  digitalWrite(HUMI, HIGH); 
  delay(500);
}

void loop() {
  Serial.print("MOISTURE LEVEL:"); 
  value = analogRead(sense_Pin); 
  Serial.println(value); 
  if(value>750)
  {
    digitalWrite(HUMI, LOW);
  } else {
    digitalWrite(HUMI, HIGH); 
  }
  delay(1000);
}