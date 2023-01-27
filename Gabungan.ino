#define MQ2pin A0
#define MQ3pin A1
#define MQ4pin A2
#define MQ5pin A3
#define MQ6pin A4
#define MQ8pin A5
#define MQ9pin A6
#define MQ135pin A7
#define MQ136pin A8



float valueMQ2;  //variable to store sensor value
float valueMQ3;  //variable to store sensor value
float valueMQ4;  //variable to store sensor value
float valueMQ5;  //variable to store sensor value
float valueMQ6;  //variable to store sensor value
float valueMQ8;  //variable to store sensor value
float valueMQ9;  //variable to store sensor value
float valueMQ135;  //variable to store sensor value
float valueMQ136;  //variable to store sensor value

void setup() {
  Serial.begin(9600); // sets the serial port to 9600
  Serial.println("MQ2 & MQ3 warming up!"); // Tampilan Awal di serial monitor
  delay(20000); // allow the MQ2 to warm up
}

void loop() { // untuk melakukan pengulangan sensor 
  valueMQ2 = analogRead(MQ2pin); // read analog input pin 0
  valueMQ3 = analogRead(MQ3pin); // read analog input pin 1
  valueMQ4 = analogRead(MQ4pin); // read analog input pin 2
  valueMQ5 = analogRead(MQ5pin); // read analog input pin 3
  valueMQ6 = analogRead(MQ6pin); // read analog input pin 4
  valueMQ8 = analogRead(MQ8pin); // read analog input pin 5
  valueMQ9 = analogRead(MQ9pin); // read analog input pin 6
  valueMQ135 = analogRead(MQ135pin); // read analog input pin 7
  valueMQ136 = analogRead(MQ136pin); // read analog input pin 8
  
  

  Serial.print("Sensor MQ2 Value: ");
  Serial.println(valueMQ2);
  Serial.print("Sensor MQ3 Value: ");
  Serial.println(valueMQ3);
  Serial.print("Sensor MQ4 Value: ");
  Serial.println(valueMQ4);
  Serial.print("Sensor MQ5 Value: ");
  Serial.println(valueMQ5);
  Serial.print("Sensor MQ6 Value: ");
  Serial.println(valueMQ6);
  Serial.print("Sensor MQ8 Value: ");
  Serial.println(valueMQ8);
  Serial.print("Sensor MQ9 Value: ");
  Serial.println(valueMQ9);
  Serial.print("Sensor MQ135 Value: ");
  Serial.println(valueMQ135);
  Serial.print("Sensor MQ136 Value: ");
  Serial.println(valueMQ136);
  
  
  delay(2000); // wait 2s for next reading
} 
