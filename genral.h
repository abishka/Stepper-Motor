//                                                     in the name of god
#ifndef _genral_INCLUDED_
#define _genral_INCLUDED_

#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h> 


#define dot_seg             0b10000000
#define a_seg               0b01000000
#define b_seg               0b00100000
#define c_seg               0b00010000
#define d_seg               0b00001000
#define e_seg               0b00000100
#define f_seg               0b00000010
#define g_seg               0b00000001


#define port_segment_a      PORTD
#define ddr_segment_a       DDRD
#define pin_segment_a       PIND
#define pin_segment_a_bit   PIND2

#define port_segment_b      PORTD
#define ddr_segment_b       DDRD
#define pin_segment_b       PIND
#define pin_segment_b_bit   PIND3

#define port_segment_c      PORTD
#define ddr_segment_c       DDRD
#define pin_segment_c       PIND
#define pin_segment_c_bit   PIND0

#define port_segment_d      PORTD
#define ddr_segment_d       DDRD
#define pin_segment_d       PIND
#define pin_segment_d_bit   PIND7

#define port_segment_e      PORTD
#define ddr_segment_e       DDRD
#define pin_segment_e       PIND
#define pin_segment_e_bit   PIND5

#define port_segment_f      PORTD
#define ddr_segment_f       DDRD
#define pin_segment_f       PIND
#define pin_segment_f_bit   PIND4

#define port_segment_g      PORTD
#define ddr_segment_g       DDRD
#define pin_segment_g       PIND
#define pin_segment_g_bit   PIND6

#define port_segment_en1    PORTD
#define ddr_segment_en1     DDRD
#define pin_segment_en1     PIND
#define pin_segment_en1_bit PIND1

//+++++++++++++++++++++++++++++++++++++++++++++++++


#define port_speed_neg_sw   PORTB
#define ddr_speed_neg_sw    DDRB
#define pn_speed_neg_sw     PINB
#define pn_speed_neg_sw_bit PINB4

#define port_speed_pos_sw   PORTB
#define ddr_speed_pos_sw    DDRB
#define pn_speed_pos_sw     PINB
#define pn_speed_pos_sw_bit PINB5

#define port_vol_ok_sw      PORTB
#define ddr_vol_ok_sw       DDRB
#define pn_vol_ok_sw        PINB
#define pn_vol_ok_sw_bit    PINB2


#define port_forward_sw   	PORTB
#define ddr_forward_sw    	DDRB
#define pn_forward_sw     	PINB
#define pn_forward_sw_bit 	PINB0


#define port_backward_sw   	PORTB
#define ddr_backward_sw    	DDRB
#define pn_backward_sw     	PINB
#define pn_backward_sw_bit 	PINB1

#define port_step   		PORTC
#define ddr_step    		DDRC
#define pn_step     		PINC
#define pn_step_bit 		PINC4

#define port_dir  			PORTC
#define ddr_dir    			DDRC
#define pn_dir     			PINC
#define pn_dir_bit 			PINC5







void all_init(void);
void port_init(void);
void attr_init(void);


void segment_a_to_g(unsigned char seg);
void volume_reading(signed int *val);

	
#endif	
