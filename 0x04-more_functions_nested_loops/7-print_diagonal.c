#include"main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * print_diagonal - function for printing
 * @n : number of lines
*/
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i <= n; i++)
	{
	if (i != 0)
	{
	for (j = 1; j <= i; j++)
	{
	if (j != i)
	{
	_putchar(' ');
	}
	else
	{
	_putchar('\\');
	}
	}
	}
	_putchar('\n');
	}
}
