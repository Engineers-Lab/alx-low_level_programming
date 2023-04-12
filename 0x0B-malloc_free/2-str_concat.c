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
	char *ps;

	ps = malloc(str_size(s1) + str_size(s2) + 1);
	if (ps == NULL)
		return (NULL);
	if (s1 == NULL && s2 != NULL)
	{
		for (i = 0; i < str_size(s1); i++)
			ps[i] = s1[i];
	}
	if (s2 == NULL && s1 != NULL)
	{
		for (j = 0; j < str_size(s2); j++)
		{
			ps[i] = s2[j];
			i++;
		}
	}
	ps[i] = '\0';
	return (ps);
}
