void setup() {
  volatile char * dir;
  dir = 0x30;
  *dir = 0xFF;
}
void loop() {
  volatile char * out;
  char current_led;

  out = 0x31;

  for (current_led= 0; current_led < 8; current_led++) {
    *out |= (1<<current_led);  //*out += (1<<current_led);

    for (volatile long i = 0; i < 100000; i++);
  }
}



