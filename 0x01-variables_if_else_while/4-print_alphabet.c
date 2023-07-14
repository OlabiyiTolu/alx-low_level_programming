#include <stdio.h>

/**
 * main - print alphabet
 * Description: print all alphabet except q and e
 *
 * Return: return 0
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != q && c != e)
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
