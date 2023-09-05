#include "main.h"
/**
 * checkfor97 - function to check for the number of args
 * @argc: number of arguments checked
 *
 * Return: no return
 */
void checkfor97(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}
int main(int argc. char *argv[])
{
	checkfor97(argc);
	return 0;
}
