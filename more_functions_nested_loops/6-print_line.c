#include "main.h"

/*
 * print_line - prints a line a determined
 * amount of time.
 */

void print_line(int n)
{
	int line = '_';

	while (n >= 0)
	{
		_putchar(line);
	n--;
	}
	_putchar('\n');
}
