#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet ten times.
 */

void print_alphabet_x10(void)
{
	char alphabet;
	int line;

	line = 0;

	while (line < 10)
	{
		alphabet = 'a';
		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
		line++;
	}
}
