#include "function_pointers.h"
/**
 *print_name - prints a name with a helper function
 *@name: a pointer to a string
 *@f: a pointer to a function
 *
 *Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
