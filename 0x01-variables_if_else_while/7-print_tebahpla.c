#include <stdio.h>

/**
 * main - reverse
 * Description: print alphabet in reverse
 *
 * Return: return 0
 */

int main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
