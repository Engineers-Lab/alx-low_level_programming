#include "main.h"
/**
 **_strcat - cancatenate two strings
 *@src: second part to be appended
 *@dest: first part to be append to
 *
 *Return: pointer to dest string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int c = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		j++;
	}
	j += i;
	for (k = i; k <= j; k++)
	{
		dest[k] = src[c];
		c++;
	}
	return (dest);
}
