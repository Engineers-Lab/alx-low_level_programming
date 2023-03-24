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

	if (size > 0)
	{
		while (i < size)
		{
			for (j = i; j >= 1; j--)
				_putchar(32);
			for (j = 0; j <= i; j++)
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
