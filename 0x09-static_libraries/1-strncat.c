#include "main.h"
/**
 **_strncat - concatenate two strings with n char from the second
 *string
 *@dest: first string; to append to
 *@src: second string; to be appended
 *@n: nomber of chars to be appended from src
 *
 *Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int c = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
		j++;
	if (n > j)
	{
		n = j;
		for (k = i; k < i + n; k++)
		{
			dest[k] = src[c];
			c++;
		}
	}
	else
	{
		for (k = i; k < i + n; k++)
		{
			dest[k] = src[c];
			c++;
		}
	}
	return (dest);
}
