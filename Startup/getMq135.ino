

void getMq135() {
  float rZero = gasSensor135.getRZero();
  float ppm = gasSensor135.getPPM();
  So2Val= ppm;
  Serial.print("SO2 Level (ppm): ");
  Serial.println(ppm);
  delay(100);
}
