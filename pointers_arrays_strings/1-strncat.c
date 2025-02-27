#include "main.h"
#include <string.h>

/**
 * _strncat - print 2 strings together.
 * @dest: pointer.
 * @src: pointer.
 * @n: pointer.
 * Return: value 0.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int dest_len = _strlen(dest);

	for (i = 0; i < n && src[i]; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}

/**
 * _strlen - finding the length of a string.
 * @str: pointer.
 * Return: value 0.
 */

int _strlen(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
		;

	return (a);
}
