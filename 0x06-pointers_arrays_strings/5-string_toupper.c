#include "main.h"
/**
 *string_toupper - change a string to uppercase
 *@s: the string
 *
 *Return: pointer to string
 */
char *string_toupper(char *s)
{
	int i = 0;
	char *p = s;

	while (s[i] != '\0')
	{
		if ('a' <= s[i] && s[i] <= 'z')
			*(p + i) = s[i] - 32;
		i++;
	}
	return (p);
}
