#include <stdio.h>
/**
  * main - function that prints all the arguments it receives
  * @argc: argument counter
  * @argv: the array/value to be printed
  * Return: 0 on success
  */
int main(int argc, char **argv)
{
	int b;

	b = 0;

	for (; b < argc; b++)
	{
		printf("%s\n", argv[b]);
	}
	printf("\n");
	return (0);
}

