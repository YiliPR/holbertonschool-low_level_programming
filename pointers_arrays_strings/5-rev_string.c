#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - function
 * @s: Pointer
 */

void rev_string(char *s)
{
	char temp;
	int len1, len2, idx;

	for (len1 = 0; s[len1] != '\0'; len1++)
		;

	len2 = len1 - 1;

	for (idx = 0; idx < len1 / 2; idx++)
	{
		temp = s[idx];
		s[idx] = s[len2];
		s[len2--] = temp;
	}
}
