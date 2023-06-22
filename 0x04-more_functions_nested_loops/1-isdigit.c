#include"main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * _isdigit - function return depend input
 *
 * @c: the character to be checked
 * Return: 1 if @c is lowercase, 0 otherwise
*/
int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
	return (1);
	else
	return (0);
}
