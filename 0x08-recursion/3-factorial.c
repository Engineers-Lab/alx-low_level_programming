#include "main.h"
/**
 *factorial - calculate the factorial of an integer number
 *@n: the final namber
 *
 *Return: the result
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 0)
		return (1);
	else
		return(n * factorial(n - 1));
}
