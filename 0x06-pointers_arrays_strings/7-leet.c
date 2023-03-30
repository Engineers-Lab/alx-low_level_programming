#include "main.h"
/**
 *leet - change some chars to numbers
 *@s: the given string
 *
 *Return: pointer to the string
 */
char *leet(char *s)
{
	char lowAlpha[] = {'a', 'e', 'o', 't', 'l'};
	char upperAlpha[] = {'A', 'E', 'O', 'T', 'L'};
	int repNum[] = {4, 3, 0, 7, 1};
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == lowAlpha[j] || s[i] == upperAlpha[j])
				s[i] = repNum[j];
			else
				continue;
		}
		i++;
	}
	return (s);
}
