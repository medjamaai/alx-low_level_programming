#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - function that revers.
 *
 * @s : char that will be reversed.
 */
void print_rev(char *s)
{
	int len;

	len = strlen(s);
	s = s + len - 1;
	while (len >= 1)
	{
	_putchar(*s);
	len--;
	s--;
	}
	_putchar('\n');
}
