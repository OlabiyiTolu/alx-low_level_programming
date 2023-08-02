#include "main.h"
/**
 * _pint_new_recursion - print reverse recursion
 * @s: characterto print
 *
 * Return: always return
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
