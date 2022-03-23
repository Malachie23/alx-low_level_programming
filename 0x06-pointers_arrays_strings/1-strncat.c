#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - function that concatenates two strings.
 * @dest: entry
 * @src: entry
 * @n: n bytes
 * Return: returnpointer dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = 0;
	while (dest[x] != '\0')
		x++;
	y = 0;
	while (src[y] != '\0' && y < n)
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	return (dest);
}
