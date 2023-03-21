#include "main.h"
/**
 *print_alphabet - prints alphabet
 *
 *Description: Prints the alphabet in lowercase
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
