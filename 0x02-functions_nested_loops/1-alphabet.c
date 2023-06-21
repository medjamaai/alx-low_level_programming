#include"main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * print_alphabet - functions
 *
 * Return: void (Success)
*/
void print_alphabet(void);
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
	_putchar(alpha);
	}
	_putchar('\n');
}
