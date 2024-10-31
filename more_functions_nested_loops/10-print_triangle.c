#include "main.h"

/**
 * print_triangle - prints a triangle.
 * @size: function variable
 */

void print_triangle(int size)
{
	int i, p;

	if (size <= 0)
		_putchar('\n');

	else
	{
		for (i = 0; i <= size; i++)
		{
			for (p = 0; p < i; p++)
					_putchar('#');
				_putchar(' ');
			_putchar('\n');
		}
	}
}
