#include "main.h"
/**
 *_strlen_recursion - count the length of a string with recursion
 *@s: the given string
 *
 *Return: length as an integer
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return(1 + _strlen_recursion(s + 1));
	}
	else
		return (0);
}
