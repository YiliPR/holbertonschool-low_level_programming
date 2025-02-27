#include <stdio.h>

/**
 * main - print single digits from 0 to 9.
 * Return: value 0.
 */

int main(void)

{
	int number;

	number = 0;

	for (number = 0; number < 10; number++)
		putchar (number + '0');
	putchar ('\n');
	return (0);
}
