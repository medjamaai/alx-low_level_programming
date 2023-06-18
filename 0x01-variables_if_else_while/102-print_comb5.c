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
	int  alpha, j, k, i;

	for (alpha = 48; alpha <= 57; alpha++)
	{
	for (j = 48; j <= 57; j++)
	{
	for (k = alpha; k <= 57; k++)
	{
	for (i = 48; i <= 57; i++)
	{
	if (alpha != k || j != i)
	{
	putchar(alpha);
	putchar(j);
	putchar(32);
	putchar(k);
	putchar(i);
	if (alpha != 57 || j != 56 || k != 57 || i != 57)
	{
	putchar(44);
	putchar(32);
	}
	}
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
