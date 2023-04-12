#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 *str_size - size of the string
 *@str: string
 *
 *Return: int size
 */
int str_size(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}
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
		i = str_size(s1);
	if (s2 != NULL)
		j = str_size(s2);
	size = j + i + 1;
	ps = malloc(sizeof(char) * size);
	if (ps == NULL)
		return (NULL);
	if (s1 == NULL && s2 != NULL)
	{
		ps = s2;
		return (ps);
	}
	if (s2 == NULL && s1 != NULL)
	{
		ps = s1;
		return (ps);
	}
	if (s1 == NULL && s2 == NULL)
		return ('\0');
	for (k = 0; k < i; k++)
		ps[k] = s1[k];
	for (k = i; k < size; k++)
	{
		ps[k] = s2[t];
		t++;
	}
	ps[k] = '\0';
	return (ps);
}
