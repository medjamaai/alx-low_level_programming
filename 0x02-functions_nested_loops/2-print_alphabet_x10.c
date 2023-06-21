#include "main.h"

/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * print_alphabet_X10 - functions for print 10 times
 *
 * Return: void (Success)
*/
void print_alphabet_x10(void)

{
	int alpha, j;
	
	for (j = 0; j < 10; j++)
	{
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
	_putchar(alpha);
	}
	_putchar('\n');
	}
}
