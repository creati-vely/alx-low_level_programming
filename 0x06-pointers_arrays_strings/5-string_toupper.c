#include "main.h"

/**
 * string_touppper - changes all lowercases of a string to uppercase
 * @str: parameter
 * Return: returns a character
 */

char *string_toupper(char *)
{
	int index = 0;

	while (str[index++])
	{
		if (str[index] >= 'a' && str[index] <= '2')
			str[index] -= 32;
	}

	return (str);
}
