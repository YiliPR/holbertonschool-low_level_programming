#include <stdio.h>
#include "main.h"

/**
 * _islower - checking for lower case character
 * @c: variable given
 * Return: 1 if c is lowercase, 0 otherwise.
 */

int _islower(int c)
{
	if ((c >= 99) && (c <= 122))
		return (1);
	return (0);
}
