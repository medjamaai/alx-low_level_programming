#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - function that revers.
 *
 * @s : char that will be reversed.
 */
void rev_string(char *s)
{
	int len, i;
	char tab[1000];

	len = strlen(s);
	for (i = 0; i <= len; i++)
	{
	tab[len - 1 - i] = *(s + i);
	}
	for (i = 0; i < len; i++)
	{
	*(s + i) = tab[i];
	}
}
