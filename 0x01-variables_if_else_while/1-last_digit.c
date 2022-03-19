#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main function
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	int re;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	re = n % 10;
	if (re > 5)
	{
		printf("%d and is greater than 5", n);
	}
	else if (re == 0)
	{
		printf("%d and is 0", n);
	}
	else if (re < 6 && re != 0)
	{
		printf("%d and is less than 6 and not 0", n);
	}
	printf("\n");
	return (0);
}
