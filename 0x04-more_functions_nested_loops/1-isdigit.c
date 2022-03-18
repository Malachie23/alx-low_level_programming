#include "main.h"
#include <stdio.h>

/**
 * _isdigit - chechs if it is the digit
 * @c: number as parameter
 * Return:1 iss is a digit otherwise is 0.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
