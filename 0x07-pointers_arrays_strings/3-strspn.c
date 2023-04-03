#include "main.h"
/**
 *_strspn -  the initial segment of s which consist only of bytes from accept
 *@s: the string to be scanned
 *@accept: the part to scan with
 *
 *Return: nomber of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int j = 0;
	int t = 0;

	while (s[j] != '\0')
	{
		if (s[j] != 32)
		{
			t = 0;
			while (accept[t] != '\0')
			{
				if (s[j] == accept[t])
					i++;
				t++;
			}
		}
		else
		{
			break;
		}
		j++;
	}
	return (i);
}
