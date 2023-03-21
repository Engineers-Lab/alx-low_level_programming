#include "main.h"
/**
 *_isalpha - checks for numbers
 *@c: the correspanding int in ASCII table
 *Return: 1 if true
 */
int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
