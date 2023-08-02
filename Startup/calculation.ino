void calculation(float mq2,float mq135,float pm){

int API  = mq2+mq135+pm; 
Serial.print("API Value is : ");
Serial.println(API);

if (API>0 && API<=50){
// good
Serial.println("API Level good");
taskRGB(2);
buzzer(0);
fanSpeed(0);

}else if (API>50 && API<=100){
//modarate 
Serial.println("API Level Modarate");
taskRGB(3);
fanSpeed(120);

}else if (API>100){
//unhelthy
Serial.println("API Level Unhelthy");
taskRGB(1);
buzzer(1);
fanSpeed(250);
}
delay(1000);
}