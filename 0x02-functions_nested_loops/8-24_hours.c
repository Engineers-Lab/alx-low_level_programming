#include "main.h"
/**
 *jack_bauer - prints time from 00:00 to 23:59
 *
 *Return: void
 */
void jack_bauer(void)
{
	int h = 0;
	int m = 0;
	int sec = 0;
	int sec01 = 0;
	int max_h = 10;

	for (h = 0; h < 3; h++)
	{
		if (h == 2)
			max_h = 4;

		for (m = 0; m < max_h; m++)
		{
			for (sec = 0; sec < 6; sec++)
			{
				for (sec01 = 0; sec01 < 10; sec01++)
				{
					_putchar('0' + h);
					_putchar('0' + m);
					_putchar(':');
					_putchar('0' + sec);
					_putchar('0' + sec01);
					_putchar('\n');
				}
			}
		}
	}
}
