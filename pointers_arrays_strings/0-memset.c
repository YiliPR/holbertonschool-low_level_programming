#include "main.h"
#include <string.h>

/**
 * _memset - fill memory.
 *
 * @s: pointer.
 *
 * @b: variable.
 *
 * @n: unsigned interger.
 *
 * Return: value 0.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
