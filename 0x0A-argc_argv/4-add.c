#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main - add function
 *@argc: nb of args
 *@argv: vector args
 *
 *Return: 0 if success otherwise 1
 */
int main(int argc, char *argv[])
{
	int result = 0;
	int i;

	for (i = 1; i < argc; i++)
	{
		if (isdigit(*argv[i]))
			result += atoi(*(argv + i));
		else
		{
			printf("%s\n", "Error");
			return (1);
		}
	}
	printf("%d\n", result);
	return (0);
}
