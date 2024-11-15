#include "main.h"

/**
 * _strcat - concentrating 2 strings together.
 * @dest: pointer.
 * @src: pointer.
 * Return: value 0.
 */

char *_strcat(char *dest, char *src)
{
	int len1;
	int len2;

	for (len1 = 0; dest[len1] != '\0'; len1++)
		;

	for (len2 = 0; src[len2] != '\0'; len2++)
		dest[len1 + len2] = src[len2];

	dest[len1 + len2] = '\0';

	return (dest);
}
