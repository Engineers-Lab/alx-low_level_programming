#include "main.h"
/**
 *print_last_digit - prints last digit
 *@n: the full number
 *
 *Return: the val of last digit
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;
	if (last_digit < 0)
	{
		_putchar('0' + (-1 * last_digit));
		return (-1 * last_digit);
	}
	else
	{
		_putchar('0' + last_digit);
		return (last_digit);
	}
}
