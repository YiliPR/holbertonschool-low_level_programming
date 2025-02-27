#include "main.h"

/**
 * _isupper - detecting if its lower or uppercase.
 * @c: the variable given.
 *Return: 1 if uppercase, 0 otherwise.
 */

int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
		return (1);
	return (0);
}
