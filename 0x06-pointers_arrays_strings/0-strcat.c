#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: a pointer to the string to be concatenates upon
 * @src: the source string to appended to dst
 * Return: return the string to be appeded to dest
 */


char *_strcat(char *dest, char *src)
{
	int dlen = 0, i;

	while (dest[dlen])
	{
		dlen++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}

	dest[dlen] = '\0';
	return (dest);
}
