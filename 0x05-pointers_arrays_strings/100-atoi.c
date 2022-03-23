#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _atoi - convert string into numbers
 *@s: pparameter
 * Return: number
 */

int _atoi(char *s)
{
	int i;
	int v = 0;

	for (i = 0; s[i] != '\0'; ++i)
		v = v * 10 + s[i] - '0';
	return (v);
}
