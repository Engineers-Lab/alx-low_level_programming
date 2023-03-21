#include <unistd.h>

int _putchar(char c);
/**
 * _count_word - counts the length of a word
 * @word: the word to be counted
 *
 * Return: the number of the caracters in the word
 */
int _count_word(char * word)
{
	int i = 0;
	int j = 0;
	while(word[i] != '\0')
	{
		j++;
		i++;
	}
	return j;
}
