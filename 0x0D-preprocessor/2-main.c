#include <stdio.h>
/**
 * main - function that prints the name of the file itwas compiled from
 *
 * Return: return name of file
 */
int main(void)
{
	char *filename = __FILE__;
	printf("%s\n", filename);
	return (0);
}
