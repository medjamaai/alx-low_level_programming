#include "main.h"
#include <stdio.h>
/**
 * _memcpy - functions that write adress
 * @dest : is a pointer to write adress
 * @src : is a variable to check
 * @n : is variable to calcul
 * Return: retur to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
	dest[i] = src[i];
	i++;
	}
	return (dest);
}
