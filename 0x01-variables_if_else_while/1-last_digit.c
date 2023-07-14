#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Last digit of
 *
 * Description: print the last digit of the number stored in the variable n
 *
 * Return: return zero
 */
int main(void)
{
	int n;
	int n1;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	n1 = n % 10;
	else if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n",n,n1);
	}
	else (n == 0)
	{
		printf("Lastdigit of %d id %d and is 0\n",n,n1);
	}
	if (n < 6 && n !=0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",n,n1);
	}
	return (0);
}
