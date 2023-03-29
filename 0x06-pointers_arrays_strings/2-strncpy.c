#include "main.h"
/**
 *_strncpy - copya given n char from a  string to another destination
 *@dest: destination
 *@src: source string
 *@n nomber of chars to be copied
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
