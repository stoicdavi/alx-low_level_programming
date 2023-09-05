#include "main.h"
/**
 * create_file - a function that creates a file
 * @text_content: cotent of the file
 * @filename: name of the file to be created
 * Return: 1 on success, -1 on failure/if any of the file operation fail
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND, 0600);
	if (fd >= 0)
	{
		for (i = 0; text_content != NULL && *(text_content + i) != '\0'; i++)
		{
			if (write(fd, text_content + i, 1) != 1)
				return (-1);
		}
		close(fd);
		return (1);
	}
	return (-1);
}
