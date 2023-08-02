
void buzzer(int status){

if (status==1){

  digitalWrite(buzzerPin,HIGH);
  
}else{

  digitalWrite(buzzerPin, LOW);
}

}