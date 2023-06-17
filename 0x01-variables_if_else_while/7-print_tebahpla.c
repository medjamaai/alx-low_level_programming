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
	char alpha = 'z';

	for (alpha = 'z'; alpha <= 'a'; alpha--)
	putchar(alpha);
	putchar('\n');
	return (0);
}
