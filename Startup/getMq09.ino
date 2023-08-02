
void getMq09() {
    int sensorValue = analogRead(mqPin); // Read analog value from the sensor
    
    float voltage = (sensorValue / 1024.0) * 5.0; // Convert analog value to voltage
    
    // Convert voltage to CO concentration using a formula based on your sensor's characteristics
    float coConcentration = convertToPPM(voltage); // Modify this function
    

    
    Serial.print("SO2 Level (ppm): ");
    Serial.print(coConcentration);
  
   
    delay(100); // Wait for a second before taking another reading
}

float convertToPPM(float voltage) {
    // Use a conversion formula based on the sensor's datasheet
    // Example conversion formula, modify this according to your sensor's specifications
    float coConcentration = (voltage - 0.2) * 100.0; // Modify this formula
     CoVal= coConcentration;
    return coConcentration;
}
