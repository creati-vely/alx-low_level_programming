#include "main.h"
/**
 * _isupper - checks for uppercase
 * @c: The number to checked
 *
 * Return: 1 for uppercase 0 for else
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	return (0);
}
