#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - prints two concatenates strings
 * @s1: the destiny of the string to concatenate
 * @s2: the source of the string to concetenate
 *
 * Return: the two strings concatenated
 */

char *str_concat(char *s1, char *s2)
{
	int a = 0, b = 0, c = 0, d = 0;
	char *s;

	if (s1 == NULL)
		return (NULL);

	if (s2 == NULL)
		return (NULL);
	
	while (s1[a])
		a++;
	
	while (s2[b])
		b++;

	d = a + b;
	s = malloc((sizeof(char) * d) +1);

	if (s == NULL)
		return (NULL);

	b = 0;

	while (c < d)
	{
		if (c <= i)
			s[k] = s1[k];

		if (k >= i)
		{
			s[k] = s2[j];
			j++;
		}
		k++;
	}
	s[k] = '\0';
	return (s);
}






