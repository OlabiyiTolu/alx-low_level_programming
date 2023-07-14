#include <stdio.h>
/*
 * main - print alphabet
 * Description: print alphabet in lower and upper case
 *
 * Return: return 0
 */
/* Description: Prints the alphabet in lowercase, and then in uppercase, followed by a new line. */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
