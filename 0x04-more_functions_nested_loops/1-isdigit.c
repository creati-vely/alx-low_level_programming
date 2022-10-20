#include "main.h"
/**
 * _isdigit - code checks for a digit
 *
 * @c: The number to checked from 0 through 9
 *
 * Return: 1 if c is a digit 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}

	return (0);
}
