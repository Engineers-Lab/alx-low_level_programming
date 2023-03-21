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

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			res = j * i;
			_putchar( res);
			_putchar(44);
			if (res > 9)
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
