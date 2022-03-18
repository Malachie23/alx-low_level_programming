#include "main.h"

/**
 *_isupper - Functions checks the upeercase
 *@c:  enrty number
 *Return: Always 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
