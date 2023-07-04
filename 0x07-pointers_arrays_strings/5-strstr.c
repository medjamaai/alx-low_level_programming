#include <stdio.h>
#include "main.h"

/**
 * _strstr - function code
 * @haystack: input
 * @needle: input
 * Return: to a searching word
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *word = haystack;
		char *check = needle;

		while (*word == *check && *check != '\0')
		{
			word++;
			check++;
		}

		if (*check == '\0')
			return (haystack);
	}

	return (NULL);
}
