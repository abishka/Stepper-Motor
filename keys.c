#include "genral.h"

void volume_reading(signed int *val)
{
    static struct
    {
        unsigned char INC : 1;
        unsigned char DEC : 1;
        unsigned char two_seen0 : 1;
        unsigned char two_seen1 : 1;

    } volume_pos;

    if (((pn_speed_pos_sw & (1 << pn_speed_pos_sw_bit))) && (!(pn_speed_neg_sw & (1 << pn_speed_neg_sw_bit))))
    {
        if (volume_pos.INC && volume_pos.two_seen1)
        {
            *val += 1;
        }
        if (volume_pos.DEC && volume_pos.two_seen1)
        {
            *val -= 1;
        }

        volume_pos.two_seen0 = 1;
        volume_pos.two_seen1 = 0;
        volume_pos.INC = 0;
        volume_pos.DEC = 0;
    }

    if (!((pn_speed_pos_sw & (1 << pn_speed_pos_sw_bit))) && ((pn_speed_neg_sw & (1 << pn_speed_neg_sw_bit))))
    {
        if (volume_pos.INC && volume_pos.two_seen0)
        {
            *val += 1;
        }
        if (volume_pos.DEC && volume_pos.two_seen0)
        {

            *val -= 1;
        }
        volume_pos.two_seen0 = 0;
        volume_pos.two_seen1 = 1;
        volume_pos.INC = 0;
        volume_pos.DEC = 0;
    }

    if (!((pn_speed_pos_sw & (1 << pn_speed_pos_sw_bit))) && (!(pn_speed_neg_sw & (1 << pn_speed_neg_sw_bit))))
    {
        if (volume_pos.two_seen0)
        {
            volume_pos.INC = 1;
        }
        if (volume_pos.two_seen1)
        {
            volume_pos.DEC = 1;
        }
    }

    if (((pn_speed_pos_sw & (1 << pn_speed_pos_sw_bit))) && ((pn_speed_neg_sw & (1 << pn_speed_neg_sw_bit))))
    {
        if (volume_pos.two_seen1)
        {
            volume_pos.INC = 1;
        }
        if (volume_pos.two_seen0)
        {
            volume_pos.DEC = 1;
        }
    }
}
