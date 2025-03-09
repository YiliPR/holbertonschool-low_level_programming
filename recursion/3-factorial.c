#include "main.h"
#include <stdio.h>

/**
 * factorial - recursion function.
 *
 * @n: pointer.
 *
 * Return: value 0.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
