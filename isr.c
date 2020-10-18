#include "genral.h"

extern signed long int enc_movment;
signed long int step_enc_movment=65000;
unsigned char segment_turning_on;

ISR(TIMER0_OVF_vect)
{
	// 0.5ms
	TCNT0 = 0x38;

	if (++segment_turning_on > 5)
	{
		segment_turning_on = 0;
	}

	if (!segment_turning_on)
	{
		port_segment_en1 |= (1 << pin_segment_en1_bit);
	}
	else if (segment_turning_on == 1)
	{
		port_segment_en1 &= ~(1 << pin_segment_en1_bit);
	}
}

ISR(TIMER1_COMPA_vect)
{

	//segment_a_to_g(characterArray[5]);

	//segment_a_to_g(characterArray[5]);
if ((pn_forward_limit_sw & (1 << pn_forward_limit_sw_bit)) &&  (pn_backward_limit_sw & (1 << pn_backward_limit_sw_bit)) )
{
	if (enc_movment > step_enc_movment)
	{
		if (pn_dir & (1 << pn_dir_bit))
		{
			port_dir &= ~(1 << pn_dir_bit);
		}
		else
		{
			port_dir |= (1 << pn_dir_bit);
		}
		step_enc_movment++;
	}
	else if (enc_movment < step_enc_movment)
	{
		if (pn_step & (1 << pn_step_bit))
		{
			port_step &= ~(1 << pn_step_bit);
		}
		else
		{
			port_step |= (1 << pn_step_bit);
		}
		step_enc_movment--;
	}
}

	if ((pn_forward_limit_sw & (1 << pn_forward_limit_sw_bit)))
	{
		if (!(pn_forward_sw & (1 << pn_forward_sw_bit)))
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
	}

	if ((pn_backward_limit_sw & (1 << pn_backward_limit_sw_bit)))
	{
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