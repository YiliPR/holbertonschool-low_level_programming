#include <stdio.h>

/**
 * main - printing the alphabets in lower and upper case.
 * Return: value 0.
 */

int main(void)
{
	char lower_case = 'a';
	char upper_case = 'A';

	for (lower_case = 'a'; lower_case <= 'z'; lower_case++)
		putchar (lower_case);
	for (upper_case = 'A'; upper_case <= 'Z'; upper_case++)
		putchar (upper_case);
	putchar ('\n');
	return (0);
}
