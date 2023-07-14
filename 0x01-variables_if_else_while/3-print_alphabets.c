#include <stdio.h>
/*
 * main - print alphabet
 * Descriptin: print alphabet in lower and upper case
 *
 * Return: return o
 */
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
