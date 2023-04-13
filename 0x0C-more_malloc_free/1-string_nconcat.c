#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 *str_len - length of a string
 *@s: string
 *
 *Return: length
 */
int str_len(char *s)
{
	int i = 0;
	if (s == NULL)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}
/**
 *string_nconcat - concatenates two strings
 *@s1: string 1
 *@s2: string 2
 *@n: amount of s2 to be concatenated with s1
 *
 *Return: pointer to char of concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ps;
	int i = 0;
	int j = 0;
	int lens1 = str_len(s1);

	if ((int)n > str_len(s2))
		n = str_len(s2);
	if (s2 == NULL)
		s2 = '\0';
	ps = malloc(sizeof(char) * lens1 + n + 1);
	if (ps == NULL)
		return (NULL);
	for (i = 0; i < lens1; i++)
		ps[i] = s1[i];
	for (j = 0; j < (int)n; j++)
	{
		ps[i] = s2[j];
		i++;
	}
	ps[i] = '\0';
	return (ps);
}
