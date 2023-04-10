#include <stdio.h>
/**
 *main - main function
 *@argc: int args
 *@argv: vector args
 *
 *Return: int
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
