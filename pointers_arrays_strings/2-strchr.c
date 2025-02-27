#include "main.h"
#include <string.h>

/**
 * _strchr - character of a string.
 *
 *@s: pointer.
 *
 *@c: variable.
 *
 * Return: value 0.
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		else
			s++;
	}

	if (*s == c)
		return (s);

	else
		return (0);
}
