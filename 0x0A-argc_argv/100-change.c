#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that prints the minimum number of
 * coins to make change for an amount of money.
 * @argc: argument count
 * @argv: Array arguments
 * Return: 0 for Success, 1 Error
 */
int main(int argc, char **argv)
{
	int total, count;
	unsigned int l;
	char *d;
	int cents[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	total = strtol(argv[1], &d, 10);
	count = 0;
	if (!*d)
	{
		while (total > 1)
		{
			for (l = 0; l < sizeof(cents[l]); l++)
			{
				if (total >= cents[l])
				{
					count += total / cents[l];
					total = total % cents[l];
				}
			}
		}
		if (total == 1)
			count++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", count);
	return (0);
}
