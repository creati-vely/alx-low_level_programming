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
	int dlen = 0, j = 0;

	while (dest[dlen])
	{
		dlen++;
	}

	while (j < n && src[j])
	{
		dest[dlen] = src[j];
		dlen++;
		j++;
	}

	dest[dlen + n + 1] = '\0';

	return (dest);
}

