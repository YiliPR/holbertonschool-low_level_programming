#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - printing the alphabet in lower cases.
 * Return: value 0.
 */

void print_alphabet(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		_putchar(lower);
	}
	_putchar('\n');
}
