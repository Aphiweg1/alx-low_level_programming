#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *   main - Generates random valid passwords for the
 *   program 101-crackme.
 *   Return: Always 0.
 */
int main(void)
{
int password[64], i, sum = 0, n;
srand(time(NULL));

for (i = 0; i < 64; i++)
{
password[i] = rand() % 78;
sum += password[i] + '0';
putchar(password[i] + '0');

if ((2772 - sum) - '0' < 78)
sum+= password[i] + '0';
putchar(password[i] + '0');
if ((2772 - sum) - '0' < 78)
{
n = 2772 - sum - '0';
sum += n;
putchar(n + '0');
printf("\nTada! Congrats\n");
break;
}
}
return (0);
}
