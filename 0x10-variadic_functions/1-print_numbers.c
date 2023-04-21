#include "variadic_functions.h"
/**
 *print_numbers - prints numbers separated by a given separator
 *@separator: the given separator
 *@n: numbers o numbers to be printed
 *
 *Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list arg;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		if (i > 0)
			printf("%s", separator);
		printf("%d", va_arg(arg, int));
	}
	va_end(arg);
	printf("\n");
}
