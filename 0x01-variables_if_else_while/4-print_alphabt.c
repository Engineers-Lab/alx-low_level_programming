#include <stdio.h>
/**
*main - convert alphabets to lower then to uppercase
*
*Return: 0
*/
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
		if (i != 113 || i != 101)
			putchar(i);
	putchar('\n');
	return (0);
}
