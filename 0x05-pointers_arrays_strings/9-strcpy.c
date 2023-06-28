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
	int len, i;

	len = strlen(src);
	for (i = 0; i < len; i++)
	{
	if (*src != '\0')
	{
	*(dest + i) = *src;
	src++;
	}
	else
	break;
	}
	return (dest);
}
