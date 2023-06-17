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
	int  alpha;

	for (alpha = 48; alpha <= 57; alpha++)
	putchar(alpha);
	for (alpha = 97; alpha <= 102; alpha++)
	putchar(alpha);
	putchar('\n');
	return (0);
}
