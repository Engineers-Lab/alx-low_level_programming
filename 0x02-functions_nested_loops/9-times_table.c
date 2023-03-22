#include "main.h"
/**
 *times_table - prints the multiplication table
 *
 *Return: void
 */
void times_table(void)
{
	int i = 0;
	int j = 0;
	int res = 0;
	int first = 0;
	int second = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			res = j * i;
			if (res < 10)
			{
				if (j > 0 && j < 10)
				{
					_putchar(32);
					_putchar(32);
				}
				_putchar('0' +  res);
				if (j < 9)
					_putchar(44);
			}
			else if (res >= 10)
			{
				if (j > 0 && j < 10)
					_putchar(32);
				first = res / 10;
				second = res % 10;
				_putchar(first + '0');
				_putchar(second + '0');
				if (j < 9)
					_putchar(44);
			}
			else
			{

			}
		}
		_putchar('\n');
	}
}
