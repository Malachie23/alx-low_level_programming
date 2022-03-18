#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - skip some numbers
 *
 *Return: Always 0.
 */

void print_most_numbers(void)
{
	int c = '0';

	while (c <= '9')
	{
		if (c == '2' || c == '4')
		{
			c++;
			continue;
		}
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
