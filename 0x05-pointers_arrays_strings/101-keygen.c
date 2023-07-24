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
char password[PASSWORD_LENGTH + 1];
int index, sum = 0;

srand(time(0));
for (index = 0; index < PASSWORD_LENGTH; index++)
{
password[index] = 33 + rand() % 94;
sum += password[index];
}
password[index] = '\0';
 while (sum != 2772) 
{
int diff = sum - 2772;
int change_index = rand() % PASSWORD_LENGTH;

if (password[change_index] - diff >= 33 && password[change_index] - diff <= 126)
{
password[change_index] -= diff;
sum -= diff;
}
}
printf("%s\n", password);

return 0;
}
