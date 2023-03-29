#include "main.h"
/**
 *reverse_array - reverse an array of integers
 *@a: the array
 *@n: size of the array
 *
 *Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int *temp = a;
	int tmp = 0;
	int j = n - 1;

	for (i = 0; i <= j; i++)
	{
		tmp = a[i];
		*(temp + i) = a[j];
		*(temp + j) = tmp;
		j--;
	}
}
