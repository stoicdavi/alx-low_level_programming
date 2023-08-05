#include <stdio.h>
/**
  * main -function that prints its name followed by a new line
  * @argv: argument vector holds the array of string
  * @argc: argumrnt count
  * Return: 0 when succss
  */
int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
