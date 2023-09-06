#include "main.h"
/**
 * check_arg - function to check whether the number of arguments is correct
 * @argc: number of arguments checked
 *
 * If the correct number of arguments is not given,
 * it prints a usage message to the stderr and exits with code 97.
 */
void check_arg(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}
/**
 * check_file - function to check whether a file exists and can be read
 * @check: checks if the file exists
 * @filename: the file being checked
 * @fd_from: file descriptor of file_from
 * @fd_to: file descriptor of file_to
 *
 * If the file does not exist or cannot be read,
 * it prints an error message and exits with code 98.
 */
void check_file(ssize_t check, const char *filename, int fd_from, int fd_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(98);
	}
}
/**
 * check_fileCreated - function to check whether the file was
 * reated successfully
 * @check: checks if the file exists
 * @filename: file to be created
 * @fd_from: file descriptor for file_from
 * @fd_to: file descriptor for file_to
 *
 * If the file cannot be created or written to,
 * it prints an error message and exits with code 99.
 */
void check_fileCreated(ssize_t check, const char *filename,
		int fd_from, int fd_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(99);
	}
}

/**
 * check_fd - function to check if the file descriptors are closed properly
 * @check: the checker
 * @file_d: file descriptors
 *
 * If a file descriptor cannot be closed, it prints an error message
 * and exits with code 100.
 */
void check_fd(int check, int file_d)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_d);
		exit(100);
	}
}
/**
  * main - function to check the codes
  * @argc: argument counter
  * @argv: argument value
  * Return: 0 on success execution
  */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t lenrd;
	mode_t file_p;
	char buffer[1024];

	check_arg(argc);

	fd_from = open(argv[1], O_RDONLY);
	check_file((ssize_t)fd_from, argv[1], -1, -1);

	file_p = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_p);
	check_fileCreated((ssize_t)fd_to, argv[2], fd_from, -1);

	while ((lenrd = read(fd_from, buffer, sizeof(buffer) - 1)) > 0)
	{
		ssize_t lenwr = write(fd_to, buffer, lenrd);
			if (lenwr != lenrd)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}

	close(fd_from);
	close(fd_to);

	return (0);
}
