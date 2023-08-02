#include "main.h"
/**
 * _puts_recursion - unction that prints a string,
 * @c: character to print
 *
 * Return; always return
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
       	_puts_recursion(s + 1);
}
