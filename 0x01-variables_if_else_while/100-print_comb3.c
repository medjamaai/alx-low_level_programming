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
	int  alpha, j;

	for (alpha = 48; alpha <= 57; alpha++)
	{
	for (j = alpha; j <= 57; j++)
	{
	if (alpha != j)
	{
	putchar(alpha);
	putchar(j);
	if (alpha != 56 || j != 57)
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
