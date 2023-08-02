#include "main.h"
#include <unistd.h>
/**
 * _putchar - unction that prints a string,
 * @c: character to print
 *
 * Return; always return
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
