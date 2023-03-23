#include "main.h"
/**
 *more_numbers - prints 10x base 10 numbers
 *
 *Return: nothing
 */

void more_numbers(void)
{
	int i;
	int j = 0;
	int c;

	while (j < 10)
	{
		for (i = 48; i < 58; i++)
			_putchar(i);

		for (c = 48; c < 53; c++)
		{
			_putchar(49);
			_putchar(c);
		}
		_putchar('\n');
		j++;
	}
}
