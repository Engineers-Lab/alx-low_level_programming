#include <stdio.h>
/**
 *main - main function
 *@argc: nb of arguments
 *@argv: args vectors
 *
 */
int main(int argc, char *argv[])
{
	(void)argv[0];
	printf("%d\n", argc - 1);
	return (0);
}
