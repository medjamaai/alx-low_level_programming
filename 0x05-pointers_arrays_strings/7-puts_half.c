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
	int len, i;

	len = strlen(str);
	str = str + len / 2;
	for (i = len / 2; i < len; i++)
	{
	_putchar(*str);
	str++;
	}
	_putchar('\n');
}
