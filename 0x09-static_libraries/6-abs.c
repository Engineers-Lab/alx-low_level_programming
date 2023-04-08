#include "main.h"
/**
 *_abs - compute the absolute value of an integer
 *@n: the integer
 *
 *Return: the value
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-1 * n);
	}
	else
	{
		return (n);
	}
}
