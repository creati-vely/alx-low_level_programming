#include "main.h"

/**
 * _puts - write a function that prints a string, a new line and stdout.
 * @str: this is my input string
 *
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
}
