#include "function_pointers.h"
/**
 *int_index - a function that searches for an integer
 *@size: is the number of elements in the array
 *@cmp: is a pointer to the function to be used to compare values
 *@array: the given array of integers
 *
 *Return: the index ||-1 if error
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
