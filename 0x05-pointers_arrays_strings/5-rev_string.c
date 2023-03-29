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
	int j = 0;
	char *p = s;
	char rev = s[0];

	while (s[len] != '\0')
	{
		len++;
	}
	len = len - 1;
	for (j = 0; j <= len; j++)
	{
		rev = s[len];
		*(p + len) = s[j];;
		*(p + j) = rev;
		len--;
	}
}
