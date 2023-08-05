#include <stdio.h>
#include "main.h"
/**
  * main - funtion to print number of arguments passed to it
  * @argc: argumrnt count
  * @argv: the argument string
  * Return: 0 when succcess
  */
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
