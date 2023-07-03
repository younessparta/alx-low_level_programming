#include "main.h"

/**
 * _memcpy - Copies a memory area
 * @dest: Memory where data is stored
 * @src: Memory where data is copied from
 * @n: Number of bytes to copy
 *
 * Return: Pointer to the destination memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
