#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates array of chars
 * @size: the size of the array
 * @c: the char to fill in the array
 *
 * Return: the array filled
 * */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
		return (NULL);

	ptr = malloc(size *sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
