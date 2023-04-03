#include "main.h"
/**
 *_memset -  function fills the first n bytes of the memory area
 *pointed to by s with the constant byte b
 *@s: the given array
 *@b: the constant
 *@n: nomber of bytes to be filled
 *
 *Return: pointer to the array s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		s[i] = b;
	return (s);
}
