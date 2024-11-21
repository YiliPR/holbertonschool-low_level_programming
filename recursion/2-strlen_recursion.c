#include "main.h"

/**
 * _strlen_recursion - length of the string using recursion.
 *
 * @s: pointer.
 *
 * Return: value 1.
 */

int _strlen_recursion(char *s)
{
	if  (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
