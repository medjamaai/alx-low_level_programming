#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - function that print.
 *
 * @str : char that will be ptinted.
 */
void puts2(char *str)
{
	int len, i;

	len = strlen(str);
	for (i = 0; i < len; i = i + 2)
	{
	_putchar(*str);
	str = str + 2;
	}
	_putchar('\n');
}
