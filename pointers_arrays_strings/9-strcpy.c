#include "main.h"
#include <string.h>

/**
 * *_strcpy - copying a string.
 * @dest: pointer.
 * @src: pointer.
 * Return: value 0.
 */

char *_strcpy(char *dest, char *src)
{
	int len;
	int cop;

	for (len = 0; src[len] != '\0'; len++)
		;

	for (cop = 0; cop <= len; cop++)
		dest[cop] = src[cop];
	dest[cop] = '\0';

	return (dest);
}
