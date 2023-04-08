#include "main.h"
/**
 *_memcpy - copies n bytes from memory area src to memory area dest
 *@dest: destination array
 *@src: the source array
 *@n: the nomber of bytes to be copied
 *
 *Return: pointer to dest array
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
