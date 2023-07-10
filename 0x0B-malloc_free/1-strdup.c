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
	int size, i;

	size = strlen(str);
	if (str == NULL)
		return (NULL);

	cp = malloc(sizeof(char) * size);

	if (cp == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		cp[i] = str[i];

	return (cp);
}
