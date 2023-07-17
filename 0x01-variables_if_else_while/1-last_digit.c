#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the last digit of a random number
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n, lastd;

    srand(time(0));
    n = rand();
    lastd = n % 10;

    printf("Last digit of %d is %d and is", n, lastd);

    if (lastd > 5)
    {
        printf(" greater than 5\n");
    }
    else if (lastd == 0)
    {
        printf(" 0\n");
    }
    else if (lastd < 6 && lastd != 0)
    {
        printf(" less than 6 and not 0\n");
    }

    return 0;
}
