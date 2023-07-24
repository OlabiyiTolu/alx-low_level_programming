#include "main.h"
/**
 * print_rev - print reverse
 * @s: variable
 *
 * Retutn:always return
 */
void print_rev(char *s)
{
	int len = _strlen(s);
	int i = 0;
	int j = len - 1;
	char temp;

	while (i < j)
	{
		temp = s[i]; 
		s[i] = s[j];
		s[j] = temp;

		i++;
		j++;
	}
}
