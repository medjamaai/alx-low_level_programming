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
	char alpha = 'a';

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	putchar(alpha);
	for (alpha = 'A'; alpha <= 'Z'; alpha++)
	putchar(alpha);
	putchar('\n');
	return (0);
}
