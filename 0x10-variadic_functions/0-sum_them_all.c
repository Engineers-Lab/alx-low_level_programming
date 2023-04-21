#include "variadic_functions.h"
/**
 *sum_them_all - perform sum on its optional params as of n
 *@n:nombre of params to be summed up
 *
 *Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i = 0;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
