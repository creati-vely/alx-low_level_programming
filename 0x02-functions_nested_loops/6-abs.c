#include "main.h"

/**
 * _abs - computes th absolute value of an integer
 *
 * @c: computes the integers
 * Return: always 0
 */

int _abs(int c)
{
		if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;

		return (abs_val);
	}

	return (c);
}
