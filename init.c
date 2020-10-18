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

    port_forward_limit_sw |= (1 << pn_forward_limit_sw_bit);
    ddr_forward_limit_sw &= ~(1 << pn_forward_limit_sw_bit);

    port_backward_limit_sw |= (1 << pn_backward_limit_sw_bit);
    ddr_backward_limit_sw &= ~(1 << pn_backward_limit_sw_bit);

    port_step &= ~(1 << pn_step_bit);
    ddr_step |= (1 << pn_step_bit);

    port_dir &= ~(1 << pn_dir_bit);
    ddr_dir |= (1 << pn_dir_bit);
}

void attr_init(void)
{
    // Timer/Counter 0 initialization
    // Clock source: System Clock
    // Clock value: 2000.000 kHz
    //0.1ms
    TCCR0 = (0 << CS02) | (1 << CS01) | (0 << CS00);
    TCNT0 = 0x38;

    // Timer/Counter 1 initialization
    // Clock source: System Clock
    // Clock value: 16000.000 kHz
    // Mode: Fast PWM top=OCR1A
    // OC1A output: Disconnected
    // OC1B output: Disconnected
    // Noise Canceler: Off
    // Input Capture on Falling Edge
    // Timer Period: 0.062563 ms
    // Timer1 Overflow Interrupt: Off
    // Input Capture Interrupt: Off
    // Compare A Match Interrupt: On
    // Compare B Match Interrupt: Off
    TCCR1A = (0 << COM1A1) | (0 << COM1A0) | (0 << COM1B1) | (0 << COM1B0) | (1 << WGM11) | (1 << WGM10);
    TCCR1B = (0 << ICNC1) | (0 << ICES1) | (1 << WGM13) | (1 << WGM12) | (0 << CS12) | (0 << CS11) | (1 << CS10);
    TCNT1H = 0x00;
    TCNT1L = 0x00;
    OCR1A = 2000;
    TIMSK = (0 << OCIE2) | (0 << TOIE2) | (0 << TICIE1) | (1 << OCIE1A) | (0 << OCIE1B) | (0 << TOIE1) | (1 << TOIE0);
}

void all_init(void)
{
    port_init();
    attr_init();
    // eeprom_to_sram();

    sei();
}