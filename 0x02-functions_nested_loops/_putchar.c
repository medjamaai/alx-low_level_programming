#include <unistd.h>
/* betty style doc for function main goes there */
/**
 * main - functions
 *
 * Return: chaine de caractere (Success)
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
