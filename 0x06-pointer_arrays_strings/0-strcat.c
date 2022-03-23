#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strcat - function that concatinate two strings
 * @dest: entry parameter
 * @src: entry parameter
 * Return: always 0.
 */

char *_strcat(char *dest, char *src)
{
	int x, y;

	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	y = 0;
	while (src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	return (dest);
}
