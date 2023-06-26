#include "main.h"
#include <stdio.h>

/**
 * swap_int - switched numbers
 *
 * @a : number that will be switched
 * @b : number that will be switched
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *b;
	*b = *a;
	*a = n;
}
