#include "main.h"
#include <string.h>

/**
 * _strlen - the length of a string.
 *
 * @s: pointer.
 *
 * Return: value 0.
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}
