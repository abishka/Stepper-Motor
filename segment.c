#include "genral.h"

unsigned char characterArray[] = {
    //  ABCDEFG  Segments      7-segment map:
    0b1111110, // 0   "0"          AAA
    0b0110000, // 1   "1"         F   B
    0b1101101, // 2   "2"         F   B
    0b1111001, // 3   "3"          GGG
    0b0110011, // 4   "4"         E   C
    0b1011011, // 5   "5"         E   C
    0b1011111, // 6   "6"          DDD
    0b1110000, // 7   "7"
    0b1111111, // 8   "8"
    0b1111011, // 9   "9"
    0b1110111, // 10  "A"
    0b0011111, // 11  "b"
    0b1001110, // 12  "C"
    0b0111101, // 13  "d"
    0b1001111, // 14  "E"
    0b1000111, // 15  "F"
    0b0000000, // 16  NO DISPLAY
    0b0000000, // 17  NO DISPLAY
    0b0000000, // 18  NO DISPLAY
    0b0000000, // 19  NO DISPLAY
    0b0000000, // 20  NO DISPLAY
    0b0000000, // 21  NO DISPLAY
    0b0000000, // 22  NO DISPLAY
    0b0000000, // 23  NO DISPLAY
    0b0000000, // 24  NO DISPLAY
    0b0000000, // 25  NO DISPLAY
    0b0000000, // 26  NO DISPLAY
    0b0000000, // 27  NO DISPLAY
    0b0000000, // 28  NO DISPLAY
    0b0000000, // 29  NO DISPLAY
    0b0000000, // 30  NO DISPLAY
    0b0000000, // 31  NO DISPLAY
    0b0000000, // 32  ' '
    0b0000000, // 33  '!'  NO DISPLAY
    0b0100010, // 34  '"'
    0b0000000, // 35  '#'  NO DISPLAY
    0b0000000, // 36  '$'  NO DISPLAY
    0b0000000, // 37  '%'  NO DISPLAY
    0b0000000, // 38  '&'  NO DISPLAY
    0b0100000, // 39  '''
    0b1001110, // 40  '('
    0b1111000, // 41  ')'
    0b0000000, // 42  '*'  NO DISPLAY
    0b0000000, // 43  '+'  NO DISPLAY
    0b0000100, // 44  ','
    0b0000001, // 45  '-'
    0b0000000, // 46  '.'  NO DISPLAY
    0b0000000, // 47  '/'  NO DISPLAY
    0b1111110, // 48  '0'
    0b0110000, // 49  '1'
    0b1101101, // 50  '2'
    0b1111001, // 51  '3'
    0b0110011, // 52  '4'
    0b1011011, // 53  '5'
    0b1011111, // 54  '6'
    0b1110000, // 55  '7'
    0b1111111, // 56  '8'
    0b1111011, // 57  '9'
    0b0000000, // 58  ':'  NO DISPLAY
    0b0000000, // 59  ';'  NO DISPLAY
    0b0000000, // 60  '<'  NO DISPLAY
    0b0000000, // 61  '='  NO DISPLAY
    0b0000000, // 62  '>'  NO DISPLAY
    0b0000000, // 63  '?'  NO DISPLAY
    0b0000000, // 64  '@'  NO DISPLAY
    0b1110111, // 65  'A'
    0b0011111, // 66  'b'
    0b1001110, // 67  'C'
    0b0111101, // 68  'd'
    0b1001111, // 69  'E'
    0b1000111, // 70  'F'
    0b1011110, // 71  'G'
    0b0110111, // 72  'H'
    0b0110000, // 73  'I'
    0b0111000, // 74  'J'
    0b0000000, // 75  'K'  NO DISPLAY
    0b0001110, // 76  'L'
    0b0000000, // 77  'M'  NO DISPLAY
    0b0010101, // 78  'n'
    0b1111110, // 79  'O'
    0b1100111, // 80  'P'
    0b1110011, // 81  'q'
    0b0000101, // 82  'r'
    0b1011011, // 83  'S'
    0b0001111, // 84  't'
    0b0111110, // 85  'U'
    0b0000000, // 86  'V'  NO DISPLAY
    0b0000000, // 87  'W'  NO DISPLAY
    0b0000000, // 88  'X'  NO DISPLAY
    0b0111011, // 89  'y'
    0b0000000, // 90  'Z'  NO DISPLAY
    0b1001110, // 91  '['
    0b0000000, // 92  '\'  NO DISPLAY
    0b1111000, // 93  ']'
    0b0000000, // 94  '^'  NO DISPLAY
    0b0001000, // 95  '_'
    0b0000010, // 96  '`'
    0b1110111, // 97  'a' SAME AS CAP
    0b0011111, // 98  'b' SAME AS CAP
    0b0001101, // 99  'c'
    0b0111101, // 100 'd' SAME AS CAP
    0b1101111, // 101 'e'
    0b1000111, // 102 'F' SAME AS CAP
    0b1011110, // 103 'G' SAME AS CAP
    0b0010111, // 104 'h'
    0b0010000, // 105 'i'
    0b0111000, // 106 'j' SAME AS CAP
    0b0000000, // 107 'k'  NO DISPLAY
    0b0110000, // 108 'l'
    0b0000000, // 109 'm'  NO DISPLAY
    0b0010101, // 110 'n' SAME AS CAP
    0b0011101, // 111 'o'
    0b1100111, // 112 'p' SAME AS CAP
    0b1110011, // 113 'q' SAME AS CAP
    0b0000101, // 114 'r' SAME AS CAP
    0b1011011, // 115 'S' SAME AS CAP
    0b0001111, // 116 't' SAME AS CAP
    0b0011100, // 117 'u'
    0b0000000, // 118 'b'  NO DISPLAY
    0b0000000, // 119 'w'  NO DISPLAY
    0b0000000, // 120 'x'  NO DISPLAY
    0b0000000, // 121 'y'  NO DISPLAY
    0b0000000, // 122 'z'  NO DISPLAY
    0b0000000, // 123 '0b'  NO DISPLAY
    0b0000000, // 124 '|'  NO DISPLAY
    0b0000000, // 125 ','  NO DISPLAY
    0b0000000, // 126 '~'  NO DISPLAY
    0b0000000, // 127 'DEL'  NO DISPLAY
};

void segment_a_to_g(unsigned char seg)
{

    if (seg & a_seg)
    {
        port_segment_a |= (1 << pin_segment_a_bit);
    }
    else
    {
        port_segment_a &= ~(1 << pin_segment_a_bit);
    }

    if (seg & b_seg)
    {
        port_segment_b |= (1 << pin_segment_b_bit);
    }
    else
    {
        port_segment_b &= ~(1 << pin_segment_b_bit);
    }
    if (seg & c_seg)
    {
        port_segment_c |= (1 << pin_segment_c_bit);
    }
    else
    {
        port_segment_c &= ~(1 << pin_segment_c_bit);
    }
    if (seg & d_seg)
    {
        port_segment_d |= (1 << pin_segment_d_bit);
    }
    else
    {
        port_segment_d &= ~(1 << pin_segment_d_bit);
    }
    if (seg & e_seg)
    {
        port_segment_e |= (1 << pin_segment_e_bit);
    }
    else
    {
        port_segment_e &= ~(1 << pin_segment_e_bit);
    }
    if (seg & f_seg)
    {
        port_segment_f |= (1 << pin_segment_f_bit);
    }
    else
    {
        port_segment_f &= ~(1 << pin_segment_f_bit);
    }
    if (seg & g_seg)
    {
        port_segment_g |= (1 << pin_segment_g_bit);
    }
    else
    {
        port_segment_g &= ~(1 << pin_segment_g_bit);
    }
}
