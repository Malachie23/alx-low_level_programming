#include <stdio.h>
#include "main.h"

/**
 * reverse_array - Function that reverse the content of array
 * @a: entry
 * @n: entry
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;

	for (i = n - 1; i >= 0; i--)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");
}
