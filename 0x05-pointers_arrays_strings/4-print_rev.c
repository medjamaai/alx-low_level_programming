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
	s = s + len;
	while (len >= 0)
	{
	_putchar(*s);
	len--;
	s--;
	}
	_putchar('\n');
}
