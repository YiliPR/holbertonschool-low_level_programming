#include "main.h"

/**
 * print_line - prints a line a determined
 * amount of time.
 * @n: function variable.
 */

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;

		for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
	}
}
