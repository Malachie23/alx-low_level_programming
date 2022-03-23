#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest:  destination
 * @src: Source
 * @n: number of string to print
 * Return: pointer to destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int y;

	y = 0;
	for (y = 0; y < n && src[y] != '\0'; y++)
	{
		dest[y] = src[y];
	}
	for ( ; y < n; y++)
	{
		dest[y] = '\0';
	}
	return (dest);
}
