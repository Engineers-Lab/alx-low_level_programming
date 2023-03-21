#include "main.h"
/**
 *print_alphabet_x10 - prints 10x the alphabets
 *
 *Return: void
 */
void print_alphabet_x10(void)
{
	int i = 0;
	int j = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 97; j < 123; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
