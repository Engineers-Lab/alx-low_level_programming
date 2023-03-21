#include "main.h"
/**
 *main - print '_putchar'
 *Return: 0
 */
int main(void)
{
	char word[] = "_putchar";
	int count = _count_word(word);
	int i;
	for (i = 0; i < count; i++)
	{
		_putchar(word[i]);
	}
	_putchar('\n');
	return (0);
}
