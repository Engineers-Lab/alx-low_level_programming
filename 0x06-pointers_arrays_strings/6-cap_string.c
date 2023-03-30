#include "main.h"
/**
 *cap_string - capitalize each word of a given string
 *@c: the string
 *
 *Return: pointer to the string
 */
char *cap_string(char *s)
{
	int i = 0;
	int j = 0;

	while (s[j] !='\0')
		j++;
	for (i = 0; i < j; i++)
	{
		if (s[i] == ' ' || s[i] == '.' || s[i] == '\n' || s[i] == '!'
		    || s[i] == '\t')
		{
			if (s[i+ 1] >= 'a' && s[i+1] <= 'z')
				s[i+1] = s[i+1] - 32;
		}
	}
	return (s);
}
