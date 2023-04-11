#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 *_strdup - allocate a space and copy a string to it
 *@str: the string
 *
 *Return: pointer to copied string
 */
char *_strdup(char *str)
{
	int i = 0;
	char *ps;
	int j;

	while (str[i] != '\0')
		i++;
	i += 1;
	if (str[0] == NULL)
		return (NULL);
	ps = malloc(sizeof(char) * i);
	if (ps == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
		ps[j] = str[j];
	return (ps);
}
