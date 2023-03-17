#include <stdio.h>
#include <ctype.h>
/**
*main - convert to lowercase
*
*Return: 0
*/
int main(void)
{
	int i;
	int n;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";

	n = 26;
	i = 0;
	for (i = 0; i < n; i++)
		putchar(tolower(alphabet[i]));
	putchar('\n');
	return (0);
}
