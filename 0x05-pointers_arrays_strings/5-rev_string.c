#include "main.h"
#include <stdio.h>
/**
 *rev_string - print a reversed given string
 *@s: the given string
 *
 *Return: nothing
 */
void rev_string(char *s)
{
	int len = 0;
	char *p;
	int j = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	p = &s[0];
	printf("_____");
	for (j = 0; j < len; j++)
	{
		s[j] = *(p)++;
		printf("%c is at j: %d\n", *(p++), j);
	}
}
