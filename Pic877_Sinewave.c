
unsigned char Sin_Angle_Voltage_Table[] = {

 127, 144, 161, 177, 191, 204, 214, 221, 225, 228, 225, 221, 214, 204, 191, 177, 161, 144, 127, 110, 93, 77, 63, 50, 40, 33, 29, 26, 29, 33, 40, 50, 63, 77, 93, 110
};

void main() {


   unsigned int delay = 197;         //30@4Mhz /165@16MHz = 60 Hz      46@4MHz / 197@16MHz = 50 Hz    8 for sinE3 steps = 5 @60Hz

   unsigned int x = 0;
   unsigned char y = 0;

 TRISA = 0;        // Set Port Direction To Output
 TRISB = 0;
 TRISC = 0;
 TRISD = 0;
 TRISE = 0;
 
 PORTD = 0;
 
 
 while(1){

 //PORTD = 127+ sinE3(x)/10;
  // x+=15;
   
   
  PORTD = Sin_Angle_Voltage_Table[x];
  x++;

  for(y=0; y<delay; y++);


  if(x>35){
    x=0;  }

   
  /*if(x>=270){
   x = 90; }*/
   

   
  //if(x>=360){
  // x = 0; }
   
   

  }













}