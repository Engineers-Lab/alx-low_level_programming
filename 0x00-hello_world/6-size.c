#include <stdio.h>
/**
*    main - print types sizes
*
*    Description: This function prints the various sizes
*    of types on the computer that is run on
*    Return: 0 if the program succed
*/
int main(void)
{
	long long int llintType;
	long int lintType;

	print("Size of a char: %c byte(s)\n", sizeof(char));
	print("Size of an int: %d byte(s)\n", sizeof(int));
	print("Size of a long int: %ld byte(s)\n", sizeof(lintType));
	print(("Size of long long int: %lld byte(s)\n", sizeof(llintType));
	print("Size of float: %f byte(s)\n", sizeof(float));
	return (0);
}
