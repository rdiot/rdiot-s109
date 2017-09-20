/* TEA5767 FM Stereo Radio Module (TEA5767) [S109] : http://rdiot.tistory.com/149 [RDIoT Demo] */

#include <Wire.h>
#include <TEA5767Radio.h>
 
TEA5767Radio radio = TEA5767Radio();
 
void setup()
{
  Wire.begin();
  radio.setFrequency(89.1); // pick your own frequency
}
 
void loop()
{
}
