#include "main.h"

/**
 * isprimehelper - recursion function helper.
 *
 * @n: variable.
 * @divisor: variable.
 *
 * Return: value 0.
 */

int isprimehelper(int n, int divisor)
{
	if (divisor == 1)
		return (1);
	if (n % divisor == 0)
		return (0);

	return (isprimehelper(n, divisor - 1));
}

/**
 * is_prime_number -recursion function.
 *
 * @n: variable.
 *
 * Return: value 0.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (isprimehelper(n, n / 2));
}
