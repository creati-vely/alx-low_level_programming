#include "main.h"
#include <stdlib.h>

/**
  * _strdup - Duplicate a string
  * @str: the string to duplicate
  *
  * Return: the string duplicated
  */
char *_strdup(char *str)
{
	int a = 0, i = 1;
	char *ptr;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}

	ptr = malloc((sizeof(char) * i) + 1);

	if (ptr == NULL)
		return (NULL);

	while (a < i)
	{
		ptr[a] = str[a];
		a++;
	}

	ptr[a] = '\0';
	return (ptr);
}
