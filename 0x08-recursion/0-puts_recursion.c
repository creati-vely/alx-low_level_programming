#include "main.h"

/**
 * _puts_recursion - prints a string using recursion
 * @s: stores the string to pu out
 * Return: return type is 0
 */

void _puts_recursion(char *s)
{
	if (s <= 0)
		return (0);
	printf("%s", s);
}
