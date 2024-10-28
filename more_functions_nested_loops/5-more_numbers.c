#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 10.
 */

void more_numbers(void)
{
	int line;
	int num;

	for (line = 0; line <= 9; line++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
				_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
