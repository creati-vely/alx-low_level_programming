#include "main.h"

/**
 * _isalpha -> checks for alphabetical letters
 * @c: is a character to be checked on
 * Return: returns 1 or 0 depending on condition
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && <= 'Z'));
}
