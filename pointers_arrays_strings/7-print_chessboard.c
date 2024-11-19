#include "main.h"
#include <string.h>

/**
 * print_chessboard - print the chessboard.
 * @a: pointer
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int j;
	char t;

	for (i = 0; i <= 7; i++)
	{
		for (j = 0; j <= 7; j++)
		{
		t = a[i][j];
		_putchar(t);
		}
	_putchar('\n');
	}
}
