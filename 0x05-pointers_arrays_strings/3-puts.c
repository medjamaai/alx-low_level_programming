#include "main.h"
#include <stdio.h>

/**
 * _puts - printing
 *
 * @str : character that will be printed
 * Return: always len + 1 : lenght of character
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
	_putchar(*str);
	str++;
	}
	_putchar('\n');
}
