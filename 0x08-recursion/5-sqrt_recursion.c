#include "main.h"
/**
 *sqrt_hlp - helper function
 *@x: the number
 *@y: the divider
 *
 *Return: integer
 */
int sqrt_hlp(int x, int y)
{
	if (y <= x)
	{
		if (y * y == x)
			return (y);
		else if (y * y > x)
			return (-1);
		return (sqrt_hlp(x, y + 1));
	}
	return (-1);
}
/**
 *_sqrt_recursion - computes square root of n
 *@n: the nomber to be squared
 *
 *Return: result
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_hlp(n, 1));
}
