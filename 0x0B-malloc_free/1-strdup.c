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
	int  i, size = 0;

	if (str == NULL)
		return (NULL);
	while (str[size] != '\0')
		size++;
	cp = malloc(sizeof(char) * (size + 1));

	if (cp == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		cp[i] = str[i];

	return (cp);
}
