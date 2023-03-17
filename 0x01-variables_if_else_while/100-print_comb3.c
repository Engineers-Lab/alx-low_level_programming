#include <stdio.h>
/**
*main - print alphabet in reverse order
*
*Return: 0
*/
int main(void)
{
	int i;
	int j;
	int t;

	t = 49;
	for (i = 48; i < 57; i++)
	{
		for (j = t; j < 58; j++)
		{
			putchar(i);
			putchar(j);
			if (i < 56)
			{
				putchar(',');
				putchar(' ');
			}
		}
		t++;
	}
	putchar('\n');
	return (0);
}
