#include "main.h"
#include <stdlib.h>

/**
 * _puts - prints the string followed by a new line.
 * @str: a parameter to puts function
 * Return: Always 0
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
