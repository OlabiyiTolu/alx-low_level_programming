#include "main.h"

/**
 * memcpy - function that copies memory area.
 * @dest: memory area
 * @src: memory area
 * @n: byte
 *
 * Return: return dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;

	while (n--)
	{
		*p++ = *src++;
	}
	return (dest);
}
