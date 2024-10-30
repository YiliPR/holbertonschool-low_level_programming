#include <stdio.h>
#include "main.h"

/**
 * main - printing 1 to 100 with fizz buzz.
 * Return: value 0.
 */

int main(void)
{
	int i = 1;

	while (1 <= 100)
	  i++;

	if (i % 3 == 0)
		printf("Fizz");
	
	else if (i % 5 == 0)
		printf("Buzz");

	else if (i % 3 == 0 && i % 5 == 0)
		printf("Fizz Buzz");

	else
		printf("%d" , i);

	if (i != 100)
		printf(" ");

	return (0);
}
