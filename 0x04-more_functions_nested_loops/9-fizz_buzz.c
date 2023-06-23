#include <stdio.h>
#include <stdlib.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Variables
 *
 * Return: 0 (Success)
*/
int main(void)
{
	int  i;

	for (i = 1; i <= 100; i++)
	{
	if (i % 3 != 0 && i % 5 != 0)
	printf("%d", i);
	else if (i % 3 == 0 && i % 5 == 0)
	printf("FizzBuzz");
	else if (i % 3 == 0)
	printf("Fizz");
	else
	printf("Buzz");
	printf(" ");
	if (i == 100)
	printf("\n");
	}
	return (0);
}
