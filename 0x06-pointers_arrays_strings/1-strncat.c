#include "main.h"

/**
 * _strncat - concatenates two strings using at most
 * @dest: the string to be appeded upon
 * @src: the string to be appended to dest
 * @n: the number of bytes from src to be appended to dest
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, destlen;

	while (dest[i++])
		destlen++;

	for (i = 0; src[i] && index < n; index++)
		dest[destlen++] = src[i];

	return (dest);
}



