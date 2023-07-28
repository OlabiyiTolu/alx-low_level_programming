#include "main.h"

/**
 * leet - function that encodes a string into 1337.
 * @str: string that will be encoded
 * Return: returns encoded string
 */

char *leet(char *str)
{
	int index1 = 0, index2;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};
	char replacements[8] = {'0', '1', '?', '3', '4', '?', '?', '7'};

	while (str[index1])
	{
		for (index2 = 0; index2 <= 7; index2++)
		{
			if (str[index1] == leet[index2] || str[index1] - 32 == leet[index2])
			{
				str[index1] = replacements[index2];
				break;
			}
		}
		index1++;
	}
	return (str);
}
