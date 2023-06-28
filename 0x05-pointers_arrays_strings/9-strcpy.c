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
	int i = -1;

	do {
	i++;
	dest[i] = src[i];
	} while (src[i] != '\0');
	return (dest);
}
