#include "main.h"
/**
 *_isupper - check if letter uppercase
 *@c: the ascii code
 *
 *Return: 1 or 0
 */
int _isupper(int c)
{
	if (c > 64 || c < 91) {
		return (1);
	}
	else
	{
		return(0);
	}
}
