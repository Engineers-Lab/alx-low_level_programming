#include "main.h"
/**
 *print_sign - prints the sign of the number
 *@n: the number
 *
 *Return: 1; 0 or -1 depanding on the sign
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

