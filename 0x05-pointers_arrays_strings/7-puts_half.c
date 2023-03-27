#include "main.h"
/**
 *puts_half - print the second half of a given string
 *@str: the given string
 *
 */
void puts_half(char *str)
{
	int len = 0;
	int half;
	int i;

	while (str[len] != '\0')
	{
		len++;
	}
	half = (len - 1) / 2;
	for (i = half + 1; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
