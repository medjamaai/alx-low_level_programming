#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strpbrk - function code
 * @s : is a word that looking for
 * @accept : is a letter to check
 * Return: retur s
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
	for (j = 0; accept[j] != '\0'; n++)
	{
	if (s[i] == accept[j])
	return (s + i);
	}
	}
	return ('\0');
}
