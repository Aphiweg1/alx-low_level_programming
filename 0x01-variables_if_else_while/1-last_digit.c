#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints a text according to the number's last didgit
 * Return: Always (Success)
 *
 */
int main(void)
{
	int n, lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = n % 10;

	if (lastd > 8)
	{
		printf(" greater than 5\n");
	}
	else if (lastd == 0)
	{
		printf("0\n");
	}
	else if (lastd < 6 && lastd != 0)
	{
		printf("less than 6 and not 0\n");
	}
	return (0);
}
