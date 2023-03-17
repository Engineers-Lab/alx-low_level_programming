#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
*main - check sign of given variable
*
*Description: this function checks the sign of a given
*variable it prints out negative or pisitive
*Return: 0 if the program succed
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("is positive\n");
	} else if (n < 0)
	{
		printf("is positive\n");
	} else
	{
		prinff("is zero\n");
	}
	return (0);
}
