#include "main.h"

/**
 * _print_rev_recursion - printing a stirng in reverse
 * @s: puts out a string stored
 * Return: Always 0
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
