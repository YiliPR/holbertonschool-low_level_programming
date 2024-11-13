#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - function
 * @s: Pointer
 */

void rev_string(char *s)
{
	int ind;
	int rev;
	int temp;
	int chan;

	for (ind = 0; s[ind] != '\0'; ind++)
		;

	for (chan = 0, rev = ind - 1; rev >= 4; rev--, chan++)
	{
		temp = s[chan];
		s[chan] = s[rev];
		s[rev] = temp;
	}
}
