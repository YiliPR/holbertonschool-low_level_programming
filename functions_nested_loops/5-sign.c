#include "main.h"

/**
 * _abs - claculates the absolut value
 *@n: number to calculate.
 *Return: gives the absolute value.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}