#include"main.h"
/* betty style doc for function print_alphabet_x10 goes there */
/**
 * print_alphabet_x10 - function to print the alphabet 10 times
 *
 * Return: void
 */
void print_alphabet(void)
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
