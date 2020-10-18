#include "genral.h"


void port_init(void)
{
	
    port_segment_a &= ~(1 << pin_segment_a_bit);
    ddr_segment_a |= (1 << pin_segment_a_bit);

    port_segment_b &= ~(1 << pin_segment_b_bit);
    ddr_segment_b |= (1 << pin_segment_b_bit);

    port_segment_c &= ~(1 << pin_segment_c_bit);
    ddr_segment_c |= (1 << pin_segment_c_bit);

    port_segment_d &= ~(1 << pin_segment_d_bit);
    ddr_segment_d |= (1 << pin_segment_d_bit);

    port_segment_e &= ~(1 << pin_segment_e_bit);
    ddr_segment_e |= (1 << pin_segment_e_bit);

    port_segment_f &= ~(1 << pin_segment_f_bit);
    ddr_segment_f |= (1 << pin_segment_f_bit);

    port_segment_g &= ~(1 << pin_segment_g_bit);
    ddr_segment_g |= (1 << pin_segment_g_bit);

     port_segment_en1 |= (1 << pin_segment_en1_bit);
    ddr_segment_en1 |= (1 << pin_segment_en1_bit);

    port_speed_pos_sw |= (1 << pn_speed_pos_sw_bit);
    ddr_speed_pos_sw &= ~(1 << pn_speed_pos_sw_bit);

    port_speed_neg_sw |= (1 << pn_speed_neg_sw_bit);
    ddr_speed_neg_sw &= ~(1 << pn_speed_neg_sw_bit);

    port_vol_ok_sw |= (1 << pn_vol_ok_sw_bit);
    ddr_vol_ok_sw &= ~(1 << pn_vol_ok_sw_bit);


    port_forward_sw |= (1 << pn_forward_sw_bit);
    ddr_forward_sw &= ~(1 << pn_forward_sw_bit);
	
	  port_backward_sw |= (1 << pn_backward_sw_bit);
    ddr_backward_sw &= ~(1 << pn_backward_sw_bit);
		
	port_step &= ~(1 << pn_step_bit);
    ddr_step |= (1 << pn_step_bit);
	
	port_dir &= ~(1 << pn_dir_bit);
    ddr_dir |= (1 << pn_dir_bit);
	
}

void attr_init(void)
{
	
TCCR1A=0x03;
TCCR1B=0x19;
OCR1A=1000;
OCR1B=(OCR1A+1)/2;

TIMSK=0x10;
	
	
}

void all_init(void)
{
    port_init();
    attr_init();
   // eeprom_to_sram();

sei();

}