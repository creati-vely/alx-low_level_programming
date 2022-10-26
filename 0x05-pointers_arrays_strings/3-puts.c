#include "main.h"

/**
 * _puts - the function puts the string
 * @str: a parameter to _puts a function
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		putchar(str);
	}

	_putchar(*str);
}
