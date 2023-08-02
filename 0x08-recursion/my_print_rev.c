#include "main.h"
#include <string.h>
/**
 * _print_rev_recursion - function that prints a string in reverse.
 * @s: chracters to print in reverse
 *
 * Return: Always return
 */

void _print_rev_recursion(char *s)
{
	int tmp;
	int i = strlen(s);
	int middle = i/2;

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		for (i = 0; i < middle; i++)
		{
			tmp = s[i];
			s[i] = s[i - 1];
			s[i - 1] = tmp;

			_putchar(*s);
			_print_rev_recursion(s - 1);
		}
	}
}
