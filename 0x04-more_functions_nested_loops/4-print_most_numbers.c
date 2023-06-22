#include"main.h"
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * print_most_numbers - function for prints the numbers.
*/
void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
	if (i != 50 && i != 52)
	_putchar(i);
	}
	_putchar('\n');
}
