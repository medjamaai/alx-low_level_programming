#include"main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * _islower - function return depend input
 *
 * @c: the character to be checked
 * Return: 1 if @c is lowercase, 0 otherwise
*/
int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
	return (1);
	else
	return (0);
}
