#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev - print in reverse the string.
 * @s: variable given.
 */

void print_rev(char *s)
{
	int num, len;

	for (num = 0; s[num] != '\0'; num++)
		;

	for (len = num - 1; len >= 0; len--)
		_putchar(s[len]);
	_putchar('\n');
}
