#include "main.h"
#include <string.h>

/**
 * _memcpy - copies the memory area.
 *
 * @dest: pointer.
 *
 * @src: pointer.
 *
 * @n: unasigned value.
 *
 * Return: return value 0.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
