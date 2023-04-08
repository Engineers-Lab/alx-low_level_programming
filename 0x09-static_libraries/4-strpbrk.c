#include "main.h"
#include <stddef.h>
/**
 *_strpbrk -  locates the first occurrence in the string
 * of any of the bytes in the string
 *@s: the string to be scanned
 *@accept: the the string to scan from
 *
 *Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	char *p = NULL;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				p = &s[i];
				return (p);
			}
			j++;
		}
		i++;
	}
	return (p);
}
