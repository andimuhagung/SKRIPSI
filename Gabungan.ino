#define MQ2pin A0
#define MQ5pin A3
#define MQ135pin A7


float valueMQ2;  //variable to store sensor value
float valueMQ5;  //variable to store sensor value
float valueMQ135;  //variable to store sensor value

void setup() {
  Serial.begin(9600); // sets the serial port to 9600
  Serial.println("MQ2 MQ5 & MQ135 warming up!"); // Tampilan Awal di serial monitor
  delay(20000); // allow the MQ2 to warm up
}

void loop() { // untuk melakukan pengulangan sensor 
  valueMQ2 = analogRead(MQ2pin); // read analog input pin 0
  valueMQ5 = analogRead(MQ5pin); // read analog input pin 3
  valueMQ135 = analogRead(MQ135pin); // read analog input pin 7
  
  

  Serial.print("Sensor MQ2 Value: ");
  Serial.println(valueMQ2);
  Serial.print("Sensor MQ5 Value: ");
  Serial.println(valueMQ5);
  Serial.print("Sensor MQ135 Value: ");
  Serial.println(valueMQ135);
  
  
  delay(2000); // wait 2s for next reading
} 
