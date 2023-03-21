#include "main.h"
/**
 *main - prints alphabet
 *
 *Return: 0 if secceded
 */
void print_alphabet(void)
{
	int i = 0;
	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
