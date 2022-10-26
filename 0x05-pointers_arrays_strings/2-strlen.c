#include "main.h"

/**
 * strlen - it returns the length of a string
 *
 * @s: store the length of string
 * Return: len
 */

int strlen(char *s)
{
	int len = 0;

	for (; *s != '\0'; s++)
	{
		len++;
	}
	return (len);
