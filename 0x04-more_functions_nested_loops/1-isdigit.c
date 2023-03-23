#include "main.h"
/**
 *_isdigit - check if is number
 *@c: the ascii code
 *
 *Return: 0 or 1
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
