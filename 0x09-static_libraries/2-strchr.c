#include "main.h"
#include <stddef.h>
/**
 *_strchr -  locates a character in a string.
 *@s: the given string
 *@c: the char to be searched
 *
 *Return: pointer to the first occurence of the char
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	char *p = NULL;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			p = &s[i];
			break;
		}
		i++;
	}
	return (p);
}
