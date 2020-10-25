#include "mbed.h"

DigitalOut led(LED1);
// main() runs in its own thread in the OS
int main() {
  while (true) {
    led = !led;
    ThisThread::sleep_for(250);
  }
}
