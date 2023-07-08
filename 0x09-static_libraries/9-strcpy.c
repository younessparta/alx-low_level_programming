#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 *
 * Return: pointer to the destination string
 */
char *_strcpy(char *dest, char *src)
{
	int length = 0;
	int i = 0;

	while (*(src + length) != '\0')
	{
		length++;
	}

	for (; i < length; i++)
	{
		dest[i] = src[i];
	}

	dest[length] = '\0';
	return (dest);
}
