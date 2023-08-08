#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
  * main - funtion that multiplies two values
  * @argc: argument counter
  * @argv: the string
  * Ruturn: 1 when not seccess
  * Return: 0 when success
  */
int main(int argc, char **argv)
{
	int a, b;

	if (argc <= 2)
	{
		printf("Error\n");
		return (0);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("%d\n", a * b);
	return (0);
}
