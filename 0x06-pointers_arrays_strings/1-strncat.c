#include "main.h"

/**
 * _strncat - concatusing  most n bytes
 * @dest: destintion
 * @src: source to append
 * @n: integer
 *
 * Return: always return
 */

char *_strncat(char *dest, char*src, int n)
{
	int index = 0;
	int dest_len = 0;

	while (dest[index++])
	{
		dest_len++;
	}

	for (index = 0; src[index] && index < n; index++)
	{
		dest[dest_len++] = src[index];
	}
	return (dest);
}
