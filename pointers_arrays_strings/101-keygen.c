#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a valid password for 101-crackme
 * Return: 0 on success
 */

int main(void)
{
    int sum = 0;
    char password[100];
    int i = 0;
    int target = 2772;
    srand(time(NULL));

    while (sum < target - 122)
    {
        password[i] = (rand() % 94) + 33;
        sum += password[i];
        i++;
    }

    password[i] = target - sum;
    password[i + 1] = '\0';

    printf("%s\n", password);
    return (0);
}
