#include "genral.h"

extern unsigned char characterArray[];
signed long int enc_movment =65000;

int main(void)
{
	all_init();

	while (1)
	{
		volume_reading(&enc_movment);
		


		if (!(enc_movment % 3))
		{
			segment_a_to_g(a_seg);
		}
		else if (enc_movment % 3 == 1)
		{
			segment_a_to_g(g_seg);
		}
		else
		{
			segment_a_to_g(d_seg);
		}
	}

	return 0;
}