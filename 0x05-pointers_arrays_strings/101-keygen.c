#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords for the
 *        program 101-crackme.
 * Return: Always 0.
 */
int main(void)
{
char password[16];
int i, sum = 0;
srand(time(NULL));

for (i = 0; i < 15; i++)
{
password[i] = rand() % 94 + 33;
putchar(password[i]);
sum += password[i];
}
password[15] = (2772 - sum) % 94 + 33;
putchar(password[15]);
password[16] = '\0';
printf("\nTada! Congrats\n");

return (0);
}
