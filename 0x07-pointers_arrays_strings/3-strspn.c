#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strspn - functions that write a founder lettre
 * @s : is a word that looking for
 * @accept : is a letter to check
 * Return: retur to s or NULL
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, c, str;

	str = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
	c = 1;
	for (j = 0; accept[j] != '\0'; j++)
	{
	if (accept[j] == s[i])
	{
	c = 0;
	str++;
	}
	}
	if (c == 1)
	return (str);
	}
	return (str);
}
