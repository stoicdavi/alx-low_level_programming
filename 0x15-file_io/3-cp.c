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
 * created successfully
 * @check: checks if the file exists
 * @filename: file to be created
 * @fd_from: file descriptor for file_from
 * @fd_to: file descriptor for file_to
 *
 * If the file cannot be created or written to,
 * it prints an error message and exits with code 99.
 */
void check_fileCreated(ssize_t check,
		const char *filename, int fd_from, int fd_to)
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
 * main - function to copy the content of one file to another
 * @argc: argument counter
 * @argv: argument value
 * Return: 0 on successful execution
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, close_from, close_to;
	ssize_t lenrd, lenwr;
	mode_t file_p;
	char buffer[1024];
	/*checking if the number of command line args is correct*/
	check_arg(argc);

	/*ope the file specified by the command-line arg (argv[1]*/
	fd_from = open(argv[1], O_RDONLY);
	/*check whether the files exists and can be read*/
	check_file((ssize_t)fd_from, argv[1], -1, -1);
	/*file permisions*/
	file_p = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_p);
	check_fileCreated((ssize_t)fd_to, argv[2], fd_from, -1);

	lenrd = 1024;

	while (lenrd == 1024)
	{
		lenrd = read(fd_from, buffer, 1024);
		/*checks if read op was succesful*/
		check_file(lenrd, argv[1], fd_from, fd_to);
		/*write data read from the source to dest file*/
		lenwr = write(fd_to, buffer, lenrd);
		if (lenwr != lenrd)
			lenwr = -1;
		check_fileCreated(lenwr, argv[2], fd_from, fd_to);
	}
	close_to = close(fd_to);
	close_from = close(fd_from);
	check_fd(close_to, fd_to);
	check_fd(close_from, fd_from);

	return (0);
}
