#define SEG_DATA_DIR DDRD
#define SEG_CTRL_DIR DDRB
#define SEG_DATA     PORTD
#define SEG_CTRL     PORTB

unsigned char sev_seg[10]  {0x81,0x82,0x84,0x88,0x90,0xa0,0xc0,0x80};
unsigned char sev_segment[9] {0xff,0xfe,0xfc,0xf8,0xf0,0xe0,0xc0,0x80,0x00}; 
 


void setup() 
{
 SEG_DATA_DIR = 0xff;
 SEG_CTRL_DIR = 0xff; 
}

void loop() 
{
  unsigned char j;
  for(j=0;j<10;j++)
  {
    SEG_DATA = sev_seg[j]|SEG_DATA;
    delay(1000);

  }

  
    unsigned char k;
  for(k=0;k<9;k++)
  {
    SEG_DATA = sev_segment[k];
    delay(1000);

  }

}
