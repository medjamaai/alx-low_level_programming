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
	i = 0;
	while (str[i] != '\0')
		i++;

	cp = malloc(sizeof(char) * (i + 1));

	if (cp == NULL)
		return (NULL);

	strcpy(cp, str);
	return (cp);
}
