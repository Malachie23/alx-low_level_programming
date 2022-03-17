#include"main.h"

/**
 *print_alphabet_x10 - lowercase_letter
 *
 *Return: always 0.
 */
void print_alphabet_x10(void)
{
	char c;
	int co = 0;

	while (co < 10)
	{
		for (c = 'a' ; c <= 'z' ; c++)
		{
			_putchar(c);
		}
		co++;
		_putchar('\n');
	}
}
