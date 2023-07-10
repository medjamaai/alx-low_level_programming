#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *cp;
	int size;

	size = strlen(str);
	if (str == NULL || size == 0)
		return (NULL);
	else
	{
	cp = malloc(size * sizeof(char));
	strcpy(cp, str);
	return (cp);
	}
}
