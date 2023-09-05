#include "main.h"
/**
 * checkfor97 - function to check for the number of args
 * @argc: number of arguments checked
 *
 * Return: no return
 */
void checkfor97(int arg)
{
	if (arg != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}
