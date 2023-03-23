#include "main.h"
/**
 *print_diagonal - print given number to form a triangle
 *@n: number of lines
 *
 *Return: nothing
 */
void print_diagonal(int n)
{
	int i = 0;
	int j;
	if (n > 0)
	{
		while (i < n)
		{
			for (j = 1; j <= i; j++)
				_putchar(32);
			_putchar(92);
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
