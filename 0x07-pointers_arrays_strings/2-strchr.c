#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strchr - functions that write a founder lettre
 * @s : is a word that looking for
 * @c : is a letter to check
 * Return: retur to s or NULL
 */
char *_strchr(char *s, char c)
{
	int i, len;

	len = strlen(s);
	for (i = 0; i < len; i++)
	{
	if (s[i] == c)
	{
	return (s + i);
	}
	}
	return ('\0');
}
