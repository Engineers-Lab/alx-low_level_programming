#include "main.h"
/**
 *is_prime_number - is n a prime number
 *@n: the number
 *
 *Return: 1 if prime, 0 is not prime
 */
int is_prime_number(int n)
{
	static int j = 2;
	if (n < 2)
	{
		j = 2;
		return (0);
	}
	else if (n % j == 0)
	{
		j = 2;
		return (0);
	}
	if (j * j > n)
	{
		j = 2;
		return (1);
	}
	j++;
	return (is_prime_number(n));
}
