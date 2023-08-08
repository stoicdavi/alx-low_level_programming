#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - Program that adds positive numbers
  * @argc: argument counts
  * @argv: Array of arguments
  * Return: Always 0 Success for execution
  */
int main(int argc, char **argv)
{
	int a = 1, i, sum = 0;
	char *flag;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (; argv[a]; a++)
	{
		i = strtol(argv[a], &flag, 10);
		if (*flag)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
