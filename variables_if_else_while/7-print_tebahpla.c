#include <stdio.h>

/**
 * main - printing alphabet in reverse.
 * Return: value 0.
 */

int main(void)
{
	char lower_case = 'z';

	for (lower_case = 'z'; lower_case >= 'a'; lower_case--)
		putchar (lower_case);
	putchar ('\n');
	return (0);
}
