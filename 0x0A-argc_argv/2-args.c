#include "main.h"
#include <stdio.h>

/**
  * main - Prints all the args content
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Always zero
  */

int main(int argc, char *argv[])
{
	(void) argc;
	while (*argv != NULL)
	{
		printf("%s\n", *argv++);
	}

	return (0);
}
