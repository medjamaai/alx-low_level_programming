#include <stdio.h>
#include <stdlib.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Variables
 *
 * Return: 0 (Success)
*/
int main(void)
{
	int  alpha, j, k;

	for (alpha = 48; alpha <= 57; alpha++)
	{
	for (j = alpha + 1; j <= 57; j++)
	{
	for (k = j + 1; k <= 57; k++)
	{
	putchar(alpha);
	putchar(j);
	putchar(k);
	if (alpha != 55 || j != 56 || k != 57)
	{
	putchar(44);
	putchar(32);
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
