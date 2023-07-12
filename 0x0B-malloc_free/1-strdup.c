#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate a string to a new memory space location
 * @str: string to duplicate
 *
 * Return: Pointer to the duplicated string, NULL if str is NULL or if memory allocation fails.
 */
char *_strdup(char *str)
{
	char *dup;
	int i, length = 0;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;

	dup = malloc(sizeof(char) * (length + 1));

	if (dup == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		dup[i] = str[i];

	dup[i] = '\0';

	return (dup);
}
