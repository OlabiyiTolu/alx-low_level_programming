#include "main.h"
/**
 * swap_int - swap int
 * @a: first value
 * @b: second value
 *
 * Return: always return
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
