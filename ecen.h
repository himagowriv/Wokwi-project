void init();
void port_output(char output);
void init(){
  volatile char * port_dir = (char *)0x30;
  *port_dir = 0xFF;

}
void port_output(char output){
  volatile char *p_output = (char *)0x31;
  *p_output = output;
}