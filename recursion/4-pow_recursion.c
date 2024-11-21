#include "main.h"

/**
 * _pow_recursion - recursion function.
 *
 * @x: variable.
 *
 * @y: variable.
 *
 * Return: return value 0.
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);

	return (_pow_recursion(x, y - 1) * x);
}
