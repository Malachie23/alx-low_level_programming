#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcmp - function that compare two strings
 * @s1: String 1.
 * @s2: string 2.
 * Return: always 0.
 */

int _strcmp(char *s1, char *s2)
{
	int res;

	res = strcmp(s1, s2);
	if (res == 0)
	{
		return (0);
	}
	else if (res > 1)
	{
		return (15);
	}
	else
	{
		return (-15);
	}
}
