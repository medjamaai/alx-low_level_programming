#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * main - function code
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Always zero
  */
int main(int argc, char *argv[])
{
	int i, s = 0;
	unsigned int j;
	char *num;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			num = argv[i];

			for (j = 0; j < strlen(num); j++)
			{
				if (num[j] < 48 || num[j] > 57)
				{
					printf("Error\n");
					return (0);
				}
			}

			s = s + atoi(num);
			num++;
		}

		printf("%d\n", s);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
