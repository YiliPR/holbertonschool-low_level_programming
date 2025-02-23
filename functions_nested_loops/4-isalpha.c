#include "main.h"
#include <stdio.h>

/**
 * _isalpha - looks for uppercase
 * @c: variable given
 * Return: return value 1 if true otherwise 0.
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
