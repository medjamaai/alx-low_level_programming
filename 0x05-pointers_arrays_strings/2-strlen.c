#include "main.h"
#include <stdio.h>

/**
 * _strlen - mesure a lenght of char
 *
 * @s : character that will be mesured
 * Return: always len + 1 : lenght of character
 */
int _strlen(char *s)
{
	int len, i;

	len = 0;
	for (i = 0; i <= 444; i++)
	{
	if (*(s + i) != '\0')
	len = len + 1;
	else if (*(s + i) == '\0')
	break;
	}
	return (len);
}
