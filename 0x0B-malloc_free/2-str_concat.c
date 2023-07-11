#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function code
 * @s1: input
 * @s2: input
 * Return: s1 + s2
 */
char *str_concat(char *s1, char *s2)
{
	char *merge;
	int i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	merge = malloc(sizeof(char) * (i + j + 1));

	if (merge == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		merge[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		merge[i] = s2[j];
		i++, j++;
	}
	merge[i] = '\0';
	return (merge);
}
