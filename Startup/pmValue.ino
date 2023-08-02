void pmValue(){

 byte data[6]; // Array to store received data
  // Request data from the PM2.5 sensor
  Wire.requestFrom(pm25Address, 6); // Request 6 bytes of data

  // Check if data is available to read
  if (Wire.available() == 6) {
    for (int i = 0; i < 6; i++) {
      data[i] = Wire.read(); // Read each byte of data
    }

   

    // Extract the third value (33) from the received data (at index 2)
    byte valuePM = data[2];
    // Print the extracted value
    Serial.print("Value on PM 2.5: ");
    Serial.println(valuePM);
     PmVal=valuePM;


  }





}