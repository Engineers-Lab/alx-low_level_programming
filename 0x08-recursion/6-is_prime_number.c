#include "main.h"
/**
 *is_prime_hlp - is prime
 *@n: number
 *@i: static value
 *
 *Return: integer
 */
int is_prime_hlp(int n, int i)
{
	if (n % i == 0)
	{
		i = 2;
		return (0);
	}
	if (i * i > n)
	{
		i = 2;
		return (1);
	}
	return (is_prime_hlp(n, i + 1));
}
/**
 *is_prime_number - is n a prime number
 *@n: the number
 *
 *Return: 1 if prime, 0 is not prime
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	else
		return (is_prime_hlp(n, 2));
	return (is_prime_number(n));
}
