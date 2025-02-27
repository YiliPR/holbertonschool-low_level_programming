#include <stdio.h>

/**
 * main - print the alphabet without q and e.
 * Return: value 0.
 */

int main(void)
{
	char letter = 'a';

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == 'e')
		{
			letter++;
		}
		if (letter == 'q')
		{
			letter++;
		}
		putchar (letter);
	}
	putchar ('\n');
	return (0);
}
