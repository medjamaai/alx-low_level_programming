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
	char buzz[] = "Buzz";
	char fizz[] = "Fizz";

	for (i = 1; i <= 99; i++)
	{
	if (i % 3 != 0 && i % 5 != 0)
	printf("%d", i);
	if (i % 3 == 0 && i % 5 == 0)
	{
	printf("%s%s", fizz, buzz);
	}
	else if (i % 3 == 0)
	printf("%s", fizz);
	else if (i % 5 == 0)
	printf("%s", buzz);
	printf(" ");
	}
	printf("\n");
	return (0);
}
