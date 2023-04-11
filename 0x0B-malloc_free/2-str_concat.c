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

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	size = j + i + 2;
	ps = malloc(sizeof(char) * size);
	if (ps == NULL)
		return (NULL);
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
