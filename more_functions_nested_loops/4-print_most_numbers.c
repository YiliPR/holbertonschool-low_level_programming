#include "main.h"

/**
 * print_most_numbers - prints the numbers from 0 to 9
 * except 2 and 4.
 */

void print_most_numbers(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		if (num == '2')
			num++;
		if (num == '4')
			num++;
		_putchar(num);
	}
	_putchar('\n');
}


