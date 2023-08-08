#include "main.h"
/**
 * *create_array - createan array of chars
 * @size: size of array
 * @c: characters
 *
 * Return: Always return
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if(size == 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(char) * size);
	
	if (array == 0)
	{
		return (NULL);
	}
	for(index = 0; index < size; index++)
	{
		array[index] = c;
	}
	return (array);
}
