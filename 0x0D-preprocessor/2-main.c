#include <stdio.h>
/**
  * main - prints the name of the file
  *
  * Return: always 0 for success
  */
#define FILE_NAME __FILE__
int main(void)
{
	printf("%s\n", FILE_NAME);
	return (0);
}
