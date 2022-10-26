#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: First parameter
 * @b: Second parameter
 *
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
