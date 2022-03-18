#include <stdio.h>

/**
 * main - Entry main
 *
 * Return: Always 0.
 */

int main(void)
{
	int n = 'a';

	while (n <= 'z')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
