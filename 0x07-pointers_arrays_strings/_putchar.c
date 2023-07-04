#include <unistd.h>
/* betty style doc for function main goes there */
/**
 * _putchar - functions for printing
 *@c : charcater
 * Return: chaine de caractere (Success)
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
