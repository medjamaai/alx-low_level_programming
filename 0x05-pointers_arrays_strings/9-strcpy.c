#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *_strcpy - function that copy.
 *
 * @dest : char that will be pasted.
 * @src : char that will be copied.
 * Return: to the value dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
	dest[i] = src[i];
	i++;
	}
	return (dest);
}
