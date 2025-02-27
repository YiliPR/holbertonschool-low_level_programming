#include "main.h"
#include <string.h>

/**
 * puts_half - prints half the string.
 * @str: pointer.
 */

void puts_half(char *str)
{
	int len;
	int length_of_the_string;
	int n;
	int i;

	length_of_the_string = 0;

	for (len = 0; str[len] != '\0'; len++)
	{
		length_of_the_string = len + 1;
	}

	n = (length_of_the_string - 1) / 2;

	for (i = n + 1; i < length_of_the_string; i++)
		_putchar(str[i]);
	_putchar('\n');
}
