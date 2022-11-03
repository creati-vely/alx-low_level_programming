#include "main.h"

/**
 * _puts_recursion - prints a string using recursion
 * @s: stores the string to pu out
 * Return: return type is 1 else 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar (*s);
	_puts_recursion(s + 1);
}
