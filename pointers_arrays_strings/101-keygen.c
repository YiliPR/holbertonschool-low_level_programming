#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 8

/**
 * main - Generates a random password for 101-crackme
 * Return: 0 on success
 */

int main(void)
{
    char password[PASSWORD_LENGTH + 1];
    int i;

    srand(time(NULL));

    for (i = 0; i < PASSWORD_LENGTH; i++)
    {
        password[i] = (rand() % 94) + 33;
    }
    password[PASSWORD_LENGTH] = '\0';

    printf("%s\n", password);
    return (0);
}

