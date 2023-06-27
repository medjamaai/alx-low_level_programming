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

	for (i = 0; i < n; i++)
	{
	if (i != n - 1)
	printf("%d, ", *a);
	else
	printf("%d", *a);
	a++;
	}
	printf("\n");
}
