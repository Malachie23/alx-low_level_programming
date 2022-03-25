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
	n = 0;
	while (a[n] != '\n')
	{
		n++;
	}
	while (n--)
	{
		printf("%d, ",a[n]);
	}
	printf("\n");
}
