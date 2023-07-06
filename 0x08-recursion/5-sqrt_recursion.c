#include "main.h"

int _sqrt(int i, int j);

/**
  * _sqrt_recursion - function code
  * @n: input
  *
  * Return: the natural square root
  */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
  * _sqrt - function code
  * @i : input
  * @j : itterat
  *
  * Return: the natural square root
  */
int _sqrt(int i, int j)
{
	int sqrt = j * j;

	if (sqrt > i)
		return (-1);

	if (sqrt == i)
		return (j);
	return (_sqrt(i, j + 1));
}
