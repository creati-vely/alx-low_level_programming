#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: a pointer to the string to be concatenates upon
 * @src: the source string to appended to dst
 * Return: return the string to be appeded to dest
 */


char *_strcat(char *dest, const char *src)
{
	int destlen, i;

	while (dest[i++])
		destlen++;

	for (i = 0; src[i]; i++)
		dest[destlen++] = src[i];

	return (dest);
}
