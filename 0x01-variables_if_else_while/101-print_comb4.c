#include <stdio.h>
/**
*main - print alphabet in reverse order
*
*Return: 0
*/
int main(void)
{
	int i; //first digit looper
	int j; //second digit looper
	int t; //second digit reference
	int s; //third digit looper
	int n; //third digit reference

	n = 50;
	t = 49;
	for (i = 48; i < 56; i++)
	{
		for (j = t; j < 57; j++)
		{
			for (s = n; s < n; s++)
			{
				putchar(i);
				putchar(j);
				putchar(s);
				putchar(',');
				putchar(' ');
			}
			n++;
		}
		t++;
	}
	putchar('\n');
	return (0);
}
