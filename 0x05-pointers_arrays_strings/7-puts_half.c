#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - function that print.
 *
 * @str : char that will be ptinted.
 */
void puts_half(char *str)
{
	int len, i, j;

	len = strlen(str);
	if (len % 2 == 0)
	j = len / 2;
	else
	j = len / 2 + 1;
	str = str + j;
	for (i = j; i < len; i++)
	{
	_putchar(*str);
	str++;
	}
	_putchar('\n');
}
