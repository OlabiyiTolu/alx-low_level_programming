#include <stdio.h>

/**
 * main - print numbers
 * Description: Print numbers followed by a new line
 *
 * Return: return o
 */

int main(void)
{
	int d;

	for (d = 0; d <=9; d++)
	{
		putchar(d + '0');
	}
	putchar('\n');
	return (0);
}
