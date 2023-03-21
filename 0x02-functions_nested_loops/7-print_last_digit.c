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
		return (-1 * last_digit);
	}
	else
	{
		return (last_digit);
	}
}
