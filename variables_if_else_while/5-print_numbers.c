#include <stdio.h>

/**
 * main - printing from 0 to base 10.
 * Return: value 0
 */

int main(void)
{
	int number;

	number = 0;

	for (number = 0; number < 10; number++)
		putchar(number + '0');
	putchar('\n');
	return (0);
}
