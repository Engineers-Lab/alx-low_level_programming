#include "main.h"
/**
 *_isalpha - checks for numbers
 *
 *Return: 1 if true
 */
int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c < 64 && c > 91))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
