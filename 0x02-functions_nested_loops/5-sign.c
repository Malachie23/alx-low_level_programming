#include "main.h"

/**
 * print_sign - functin that print a ssign of number
 * @n: number
 * Return: 1 if is+, 0 if is 0, -1 if is -.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		return (0);
		_putchar ('0');
	}
	else
	{
		return (-1);
		_putchar('-');
	}
}
