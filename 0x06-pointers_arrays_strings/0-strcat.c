#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: a pointer to the string to be concatenates upon
 * @src: the source string to appended to dst
 * Return: return the string to be appeded to dest
 */


char *_strcat(char *dest, ichar *src)
{
	int dest_len, i;

	while (dest[i++])
		dest_len++;

	for (i = 0; src[i]; i++)
		dest[dest_len++] = src[i];

	return (dest);
}
