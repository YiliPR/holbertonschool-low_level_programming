#include "main.h"
#include <string.h>

/**
 * print_diagsums - print the sum of a diagonal array of an array.
 *
 * @a: pointer.
 *
 * @size: variable.
 */

void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int sum1;
	int sum2;
	int step1;
	int step2;

	sum1 = 0;
	sum2 = 0;
	for (i = 0; i <= (size - 1); i++)
	{
		step1 =  (size + 1) * i;
		sum1 = sum1 + *(a + step1);
	}

	for (j = 1; j <= size; j++)
	{
		step2 = (size - 1) * j;
		sum2 = sum2 + *(a + step2);
	}
	printf("%d, %d\n", sum1, sum2);
}
