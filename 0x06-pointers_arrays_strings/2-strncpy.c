#include "main.h"
/**
 *_strncpy - copya given n char from a  string to another destination
 *@dest: destination
 *@src: source string
 *@n: nomber of chars to be copied
 *
 *Return: pointer to copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (src[j] != '\0')
		j++;

	for (i = 0; i < n; i++)
	{
		if (i >= j)
			dest[i] = '\0';
		else
			dest[i] = src[i];
	}
	return (dest);
}
