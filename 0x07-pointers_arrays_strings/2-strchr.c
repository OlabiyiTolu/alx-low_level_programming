#include "main.h"
#include <stddef.h>
/**
 * _strchr -  function that locates a character in a string.
 * @s: string
 * @c:  first occurrence of the character c
 *
 * Return: Returns a pointer
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
	{
		if (s[index] == c)
		{
			return (&s[index]);
		}
	}
	return (NULL);
}
