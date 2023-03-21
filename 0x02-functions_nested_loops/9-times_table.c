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

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			_putchar('0' + (j * i));
			_putchar(44);
			if (i * j > 9)
			{
				_putchar(32);
				_putchar(32);
			}
			else
			{
				_putchar(32);
			}
		}
		_putchar('\n');
	}
}
