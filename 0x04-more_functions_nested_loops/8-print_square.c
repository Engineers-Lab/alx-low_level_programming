#include "main.h"
/**
 *print_square - print a box of dashs
 *@size: size of the box
 *
 *Return: nothing
 */
void print_square(int size)
{
	int i = 0;
	int j = 0;

	while (i < size)
	{
		for (j = 0; j < size; j++)
			_putchar(35);
		i++;
	}

	_putchar('\n');
}
