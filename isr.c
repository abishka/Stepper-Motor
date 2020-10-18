#include "genral.h"

extern unsigned char  characterArray[] ;


ISR(TIMER1_COMPA_vect)
{
	
	//segment_a_to_g(characterArray[5]);
	
	//segment_a_to_g(characterArray[5]);
	
	
	
	
	 if (! (pn_forward_sw & (1 << pn_forward_sw_bit)))
	 {
		 if (pn_step & (1 << pn_step_bit))
	 {	 
	 port_step &= ~(1 << pn_step_bit);		 
	 } 
	 else
	 {
			 port_step |= (1 << pn_step_bit);
 
	 }
		 
		 
	 }
		
 if (!(pn_backward_sw & (1 << pn_backward_sw_bit)))
	 {
		 
		 	 if (pn_dir & (1 << pn_dir_bit))
	 {	 
	 port_dir &= ~(1 << pn_dir_bit);		 
	 } 
	 else
	 {
			 port_dir |= (1 << pn_dir_bit);
 
	 }
		 
	 }		
	
}

/*
ISR(TIMER1_OVF_vect)
{
    //void timer1_ovf_isr(void)
    //{
    TCNT1H = 0x70; 
    TCNT1L = 0x01; 
	
}
*/