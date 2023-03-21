#include "main.h"
/**
 *_islower - checks whether the letter is lowercase or not
 *@c: the letter to check
 *Return: 1 if the letter is lowercase
 */
int _islower(char c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
