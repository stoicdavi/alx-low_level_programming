#include <stdlib.h>
#include <stdio.h>

/**
 * _opcodes - function to print opcodes
 * @b: pointer variable
 * @k: number of bytest
 * Return: void no return type
 */
void _opcodes(char *b, int k)
{
	int a;

	for (a = 0; a < k; a++)
	{
		printf("%.2hhx", b[a]);
		if (a < k - 1)
			printf(" ");
	}
	printf("\n");

}

/**
 * main - enrty point
 * @argc: number of arguments passed
 * @argv: argument value
 * Return: always O
 */
int main(int argc, char **argv)
{
	int b;

	if (argc != 2)
	{
		printf("Error\n");
		exit(-1);
	}
	b = atoi(argv[1]);
	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}
	_opcodes((char *)&main, b);
	return (0);
}
