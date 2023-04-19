#include "function_pointers.h"
#include <stddef.h>
/**
 *array_iterator - apply a given function on each element of the array
 *@array: pointer to a given array
 *@size: array size
 *@action: the function to be applied
 *
 *Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
