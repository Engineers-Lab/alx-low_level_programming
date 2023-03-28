#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *print_array - print a nomber of elements from an array
 *@a: array
 *@n: nomber of elements
 *
 *Return: nothing
 */
void print_array(int *a, int n)
{
	int size;
	int i;

	size = (sizeof(a) / sizeof(a[0]));
	for (i = n; i < size; i++)
	{
		if (i < size - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
}
