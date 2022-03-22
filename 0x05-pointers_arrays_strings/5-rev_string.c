#include "main.h"
#include<stdio.h>

/**
 * rev_string - reverse
 * @s: string charcter
 */

void rev_string(char *s)
{
	char r[1000];
	int begin;
	int end;
	int count;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}
	end = count - 1;
	for (begin = 0; begin < count; begin++)
	{
		r[begin] = s[end];
		end--;
	}
	r[begin] = '\0';
	printf("%s\n", r);
}
