#include "main.h"

/**
 * _strcat - concat two strings
 * @dest: destination
 * @src: what to append
 *
 * Return: always return
 */

char *_strcat(char *dest, char *src)
{
	int index = 0;
	int dest_len = 0;

	while (dest[index++])
	{
		dest_len++;
	}

	for (index = 0; src[index]; index++)
	{
		dest[dest_len++] = src[index];
	}

	return (dest);
}
