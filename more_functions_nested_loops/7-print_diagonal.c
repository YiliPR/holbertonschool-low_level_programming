#include "main.h"

/**
 * print_diagonal - prints a diagonal line a determined
 * amount of time.
 * @n: function variable.
 */

void print_diagonal(int n)
{
	int i;
	int p;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (p = 0; p < i; p++)
				_putchar(' ');
			_putchar('\\');
		_putchar('\n');
		}
	}
}
