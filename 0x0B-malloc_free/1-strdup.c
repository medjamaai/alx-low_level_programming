#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - function code
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *cp;
	int size;

	size = strlen(str);
	if (str == NULL)
		return (NULL);
	cp = malloc(size * sizeof(char));
	strcpy(cp, str);
	return (cp);
}
