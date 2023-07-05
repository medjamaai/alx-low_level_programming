#include "main.h"

/**
  * _puts_recursion - function code
  * @s: the string to print
  *
  * Return: Nothing.
  */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
	_putchar(*s);
	s++;
	 _puts_recursion(s);
	}
}
