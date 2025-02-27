#include <stdio.h>

/**
 * main - printing the alphabet from a to z.
 * Return: value 0.
 */

int main(void)
{
	char a = 'a';

	for (a = 'a'; a <= 'z'; a++)
		putchar (a);
	putchar ('\n');
	return (0);
}
