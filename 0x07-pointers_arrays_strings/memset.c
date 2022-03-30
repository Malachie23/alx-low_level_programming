#include"main.h"
#include<stdio.h>

/**
 * _memset - Function that fills memory
 * @s: argument s
 * @b: argument b
 * @n: argument int n
 *
 * Return: reurn pointer s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
