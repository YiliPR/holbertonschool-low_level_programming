#include "main.h"
#include <string.h>

/**
 * string_toupper - string to change.
 *
 * @word: worde to change,
 *
 * Return: returns words in capiital letters.
 */

char *string_toupper(char *word)
{
	int i;
	int change = 'a' - 'A';

	for (i = 0; word[i] != '\0'; i++)
	{
		if (word[i] >= 'a' && word[i] <= 'z')
		{
			word[i] = word[i] - change;
		}
	}

	return (word);
}
