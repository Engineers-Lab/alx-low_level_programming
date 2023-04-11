#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 *str_concat - concatenates 2 strings
 *@s1: string 1
 *@s2: srting 2
 *
 *Return: the new concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int size = 0;
	int k = 0;
	int t = 0;
	char *ps;

	if (s1 != NULL)
	{
		while (s1[i] != '\0')
			i++;
	}
	if (s2 != NULL)
	{
		while (s2[j] != '\0')
			j++;
	}
	size = j + i + 2;
	ps = malloc(sizeof(char) * size);
	if (ps == NULL)
		return (NULL);
	if (s1 == NULL && s2 != NULL)
	{
		for (k = 0; k < j; k++)
			ps[k] = s2[k];
		return (ps);
	}
	if (s2 == NULL && s1 != NULL)
	{
		for (k = 0; k < i; k++)
			ps[k] = s1[k];
		return (ps);
	}
	if (s1 == NULL && s2 == NULL)
	{
		ps = '\0';
		return (ps);
	}
	for (k = 0; k < i; k++)
	{
		ps[k] = s1[k];
	}
	for (k = i; k < size; k++)
	{
		ps[k] = s2[t];
		t++;
	}
	return (ps);
}
