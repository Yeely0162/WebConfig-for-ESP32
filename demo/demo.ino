#include "webconfig.h"
void setup(){
  Serial.begin(115200);
  setupdata();
}
void loop(){
  rebuild();
}
