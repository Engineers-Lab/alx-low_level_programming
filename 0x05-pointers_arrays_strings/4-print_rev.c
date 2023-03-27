#include "main.h"
/**
 *print_rev - print a reversed given string
 *@s: the given string
 *
 *Return: nothing
 */
void print_rev(char *s)
{
	int len;
	int i;

	{
		int i = 0;
		while (s[i] != '\0')
		{
			i++;
		}
		len = i;
	}

	for (i = len - 1; i > 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
