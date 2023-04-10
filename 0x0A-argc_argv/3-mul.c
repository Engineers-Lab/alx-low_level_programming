#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints the production of 2 nombers
 *@argc: args nomber
 *@argv: args vector
 *
 *Return: 0 if success othwise 1
 */
int main(int argc, char *argv[])
{
	int a,b;
	int result;

	if (argc <= 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		result = a * b;
		printf("%d\n", result);
		return (0);
	}
}
