#include <stdio.h>

/**
 * main -print base16
 * Description: print base 16 in lowercase
 *
 * Return: return 0
 */

int main(void)
{
	int a;
	char b;

	for (a = 0; a <= 9; a++)
	{
		putchar(a +'0');
	}
	for (b = 'a'; b <= 'e'; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
