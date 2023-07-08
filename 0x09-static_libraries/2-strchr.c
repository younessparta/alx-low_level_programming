#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: input string
 * @c: character to locate
 *
 * Return: pointer to the first occurrence of the character in the string,
 *         or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}

	return (0);
}
