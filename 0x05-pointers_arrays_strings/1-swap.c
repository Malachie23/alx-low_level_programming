#include "main.h"
#include <stdio.h>

/**
 * swap_int - Function that swap values of varibales
 * @a: parameter input
 * @b: parameter input
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
