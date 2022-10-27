#include "main.h"
#include <stdlib.h>


/**
  * _puts - Prints a string
  * @str: The string to print
  *
  * Return: void
  */


void _puts(char *str)
{
	while (*str != '\0')
	{
		_puts(*str++);
	}

	_puts('\n');
}
