#include "main.h"
/**
 * factorial - function to print factorial
 * @n: input variable
 *
 * Return: Always return 0
 */

int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}
	else if (n < 1)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
