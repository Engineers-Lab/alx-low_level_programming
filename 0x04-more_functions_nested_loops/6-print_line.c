#include "main.h"
/**
 *print_line - print given number of underscores
 *@n: number of underscore
 *
 *Return: nothing
 */
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar(95);
	}
	_putchar('\n');
}
