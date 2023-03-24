#include "main.h"
/**
 *print_triangle - print given number to form a triangle
 *@size: number of lines
 *
 *Return: nothing
 */
void print_triangle(int size)
{
	int i = 0;
	int j;
	int q;

	if (size > 0)
	{
		while (i < size)
		{
			for (j = size - 1; j >= 1; j--)
				_putchar(32);
			for (q = 0; q <= size; q++)
				_putchar(35);

			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
