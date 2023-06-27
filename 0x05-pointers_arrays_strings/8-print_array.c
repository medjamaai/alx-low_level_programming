#include "main.h"
#include <stdio.h>

/**
 * print_array - printing
 *
 * @a : character that will be printed
 * @n : dimension of array
 */
void print_array(int *a, int n)
{
	int i;

	if(n == 0)
	printf("%d", *a);
	else
	{
	printf("%d", *a);
	for (i = 1; i < n; i++)
	{
	a++;
	printf(", %d", *a);
	}
	}
	printf("\n");
}
