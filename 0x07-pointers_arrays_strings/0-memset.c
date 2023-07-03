#include "main.h"
#include <stdio.h>
/**
 * _memset - functions that write adress
 * @s : is a pointer to write adress
 * @b : is a variable to check
 * @n : is variable to calcul
 * Return: retur to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
	s[i] = b;
	n--;
	i++;
	}
	return (s);
}
