#include "main.h"

/**
 * _strlen_recursion - returns the length of a function b recursion
 * @s: stores the tring to be printed out
 * Returns: returns 0 else *s
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return 1 + _strlen_recursion(s + 1);
	}
}
