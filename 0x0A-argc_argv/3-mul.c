#include <stdio.h>
#include <stdlib.h>
/**
  * main - funtion that multiplies two values
  * @argc: argument counter
  * @argc: the string
  * Ruturn: 1 when not seccess
  * Return: 0 when success
  */
int main(int argc, char **argv)
{
	int a, b;

	if (argc <= 2)
	{
		printf("rror\n");
		return (0);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("%d\n", a * b);
	return (0);
}
