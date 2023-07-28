#include <string.h>
#include <stdio.h>
void main(void)
{
	char word[] = "blabla food";
	char set[] = "blaf";
	int i = 0;

	i = strspn(word, set);
	printf("nomber is %d", i);
}
