#include "main.h"
/**
 **_strcpy - copy string to another location
 *@dest: destination
 *@src: the source string
 *
 *Return: a pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	char *p = dest;

	while (src[i] != '\0')
	{
		*(p + i) = src[i];
		i++;
	}
	*(p + i) = src[i];
	return (p);
}
