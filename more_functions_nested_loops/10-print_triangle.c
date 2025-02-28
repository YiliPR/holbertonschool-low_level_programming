#include "main.h"
/**
 * print_triangle - entry point
 * @size: variable
 * Return: 0 (success)
 */
void print_triangle(int size)
{
	int h, p, v;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (h = 0; h < size; h++)
		{
			for (p = size - h; p > 1; p--)
			{
				_putchar(' ');
			}
			for (v = 0; v <= h; v++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
