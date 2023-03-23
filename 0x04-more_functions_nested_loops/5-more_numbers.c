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

	while (j < 10)
	{
		for (i = 48; i < 58; i++)
			_putchar(i);

		for (i = 48; i < 53; i++)
		{
			_putchar(49);
			_putchar(i);
		}
		_putchar('\n');
		j++;
	}
}
