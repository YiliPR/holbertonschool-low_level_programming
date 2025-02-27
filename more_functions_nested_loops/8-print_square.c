#include "main.h"

/**
 * print_square - prints a square.
 * @size: variable function.
 */

void print_square(int size)
{
	int i;
	int p;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (p = 0; p < size; p++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
