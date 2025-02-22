#include "main.h"

/**
 * _isalpha - looks for uppercase
 * 
 * @c: variable given
 * 
 *Return: return value 1 if true otherwise 0.
 */

int _isalpha(int c)
{
	if (((c >= 65) && (c <= 90)) || ((c >= 97) && (c <= 122)))
		return (1);
	return (0);
}
