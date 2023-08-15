#include <stdio.h>
#include <sdtlib.h>
/**
  * main - prints the name of the file
  *
  * Return: always 0 for success
  */
#define FILENAME _FILE_
int main(void)
{
	printf("%s\n", FILENAME);
	return (0);
}
