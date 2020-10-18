#include "genral.h"


signed int vool=3;
extern unsigned char  characterArray[] ;


int main(void)
{
all_init();
	
	while (1)
	{
           volume_reading(&vool);
  
		   segment_a_to_g(characterArray[vool]);
     
	 
	/* 
	 port_segment_en1 |= (1 << pin_segment_en1_bit);
_delay_ms(2);
	 port_segment_en1 &=~ (1 << pin_segment_en1_bit);

_delay_ms(5);

*/
	}

return 0;
}