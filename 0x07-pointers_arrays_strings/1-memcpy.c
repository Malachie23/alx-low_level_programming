#include "main.h"

/**
 * _memcpy - copy memory
 * @dest: dstination
 * @src: source
 * @n: byte number
 * Return: destination dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n && src[i]; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
