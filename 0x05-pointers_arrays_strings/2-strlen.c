#include "main.h"

/**
 * _strlen - length of string
 * @s: chharacter
 *
 * Return: alwats return
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
