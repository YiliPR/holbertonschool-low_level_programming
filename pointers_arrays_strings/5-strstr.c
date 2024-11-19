#include "main.h"
#include <string.h>

/**
 * _strstr - finds a string inside a string.
 *
 * @haystack: pointer.
 *
 * @needle: pointer.
 *
 * Return: value 0.
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}
		if (*two == '\0')
			return (haystack);
	}
	return (NULL);
}
