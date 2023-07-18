#include <stdio.h>
#include <unistd.h>

/** 
 * _putchar - putchar
 * 
 * Return: return character
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
