#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
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
