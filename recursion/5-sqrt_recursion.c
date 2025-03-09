#include "main.h"

/**
 * sqrt_helper - recursion function helper.
 *
 * @n: variable.
 * @guess: variable.
 * Return: value 0.
 */

int sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	else if (guess * guess > n)
		return (-1);
	else
		return (sqrt_helper(n, guess + 1));
}

/**
 * _sqrt_recursion - recursion sqrt
 *
 * @n: variable
 * Return: value
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (sqrt_helper(n, 0));
}
