// Credits: https://www.instructables.com/id/How-to-use-Potentiometer-Arduino-Tutorial/

//Constants:
const int ledPin = 5;  //pin 9 has PWM funtion
const int potPin = A0; //pin A0 to read analog input

//Variables:
int value; //save analog value

void setup() {
  pinMode(ledPin, OUTPUT); 
  //pinMode(potPin, INPUT); //Optional 
}

void loop() {
  value = analogRead(potPin);          //Read and save analog value from potentiometer
  value = map(value, 0, 1023, 0, 255); //Map value 0-1023 to 0-255 (PWM)
  analogWrite(ledPin, value);          //Send PWM value to led
  delay(100);                          //Small delay
}                           
