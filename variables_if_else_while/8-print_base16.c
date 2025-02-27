#include <stdio.h>

/**
 * main - printing numbers of base 16 in lower case.
 * Return: value 0.
 */

int main(void)
{
	int numbers;
	char lower;

	for (numbers = '0'; numbers <= '9'; numbers++)
		putchar(numbers);

	for (lower = 'a'; lower <= 'f'; lower++)
		putchar(lower);
	putchar('\n');

	return (0);
}
