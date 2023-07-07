#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - function code
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Always zero
  */
int main(int argc, char *argv[])
{
	int multi;

	if (argc == 3)
	{
		multi = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", multi);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
