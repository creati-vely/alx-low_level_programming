#include "main.h"

/**
 * _puts - prints the string followed by a new line.
 * @str: a parameter to _puts function
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
