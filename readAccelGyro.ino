
#include <Wire.h>
#include <ProtoLSM6DSOXLib.h>

#define IMUADD 0x6A

ProtoLSM6DSOXLib IMU(IMUADD);



void setup(){

serial.begin(9600);

  
}

void loop() {

}