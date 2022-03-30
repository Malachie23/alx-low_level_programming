#include "main.h"

/**
 * _strchr - Function that loacates a character
 * @s: characters
 * @c: character.
 * Return: characters.
 */

char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a] != '\0')
	{
		a++;
	}
	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}
	return ('\0');
}
