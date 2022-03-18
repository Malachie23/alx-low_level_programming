#include "main.h"
#include <stdio.h>

/**
 * print_numbers - 0 - 9.
 *
 * Return: Alwasys 0.
 */

void print_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
