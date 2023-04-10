#include <stdio.h>
/**
 *main - prints the production of 2 nombers
 *@argc: args nomber
 *@argv: args vector
 *
 *Return: 0 if success othwise 1
 */
int main(int argc, char *argv[])
{
	int i;
	int result;

	if (argc <= 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		result = argv[1] * argv[2];
		printf("%d\n", result);
	}
}
