


void setup() {
  
  
  // Initialize USB serial
  // Note: With Maple core, SerialUSB is mapped to Serial when USB is enabled
  Serial.begin(115200);
  
  
  

  delay(1500); // Give USB time to initialize
  
  // Send welcome message
  Serial.println();
  Serial.println("STM32 Blue Pill USB Echo Test (Maple Core)");
  Serial.println("Type something to see it echoed back");
  Serial.println();
}

void loop() {
  
  // Check if data is available from USB
  if (Serial.available() > 0) {
   
    
    // Read and echo every available byte
    while (Serial.available() > 0) {
      uint8_t inByte = Serial.read();
      
      // Echo it back immediately
      Serial.write((uint8_t)inByte); // Explicit cast to avoid ambiguity


  
    }
    
 
  }
  

}
