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

	while (i < n)
	{
		for (j = 0; j < i; j++)
			_putchar(32);
		_putchar(92);
		_putchar('\n');
		i++;
	}

	_putchar('\n');
}
