#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - function that reads a text file and prints it to the POSIX
 * @filename: pointer to the file called filename
 * @letters: characters to be returned
 * Return: the actual number of letters it can read
 * if file cannot be opened or read return 0
 * if filename is null return 0
 * if write fails return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t opn, red, writ;
	char *bufr;

	if (filename == NULL)
		return (0);

	bufr = malloc(sizeof(char) * letters);
	if (bufr == NULL)
		return (0);

	opn = open(filename, O_RDONLY);
	red = read(opn, bufr, letters);
	writ = write(STDOUT_FILENO, bufr, red);

	if (opn == -1 || red == -1 || writ == -1 || writ != red)
	{
		free(bufr);
		return (0);
	}

	free(bufr);
	close(opn);

	return (writ);
}
