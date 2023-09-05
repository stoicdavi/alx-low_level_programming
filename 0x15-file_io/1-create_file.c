#include "main.h"
/**
 * create_file - a function that creates a file
 * @text_content: cotent of the file
 * @filename: name of the file to be created
 * Return: 1 on success, -1 on failure/if any of the file operation fail
 */
int create_file(const char *filename, char *text_content)
{
	int op;
	int count = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[count])
			count++;
	}

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (op == -1)
	{
		return (-1);
	}
	write(op, text_content, count);
	if ((write(op, text_content, count)) == -1)
		return (-1);
	close(op);
	return (1);
}
