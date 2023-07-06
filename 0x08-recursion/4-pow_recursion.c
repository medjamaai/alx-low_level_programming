#include "main.h"

/**
  * _pow_recursion - function code
  * @x: input
  * @y: input
  *
  * Return: pow of x
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
