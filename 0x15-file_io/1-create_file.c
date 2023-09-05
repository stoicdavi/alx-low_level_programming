#include "main.h"
/**
 * create_file - a function that creates a file
 * @text_content: cotent of the file
 * @filename: name of the file to be created
 * Return: 1 on success, -1 on failure/if any of the file operation fail
 */
int create_file(const char *filename, char *text_content)
{
	int fileo, filew;
	int len;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fileo = open(filename, O_WRONLY | O_APPEND);
	filew = write(fileo, text_content, len);

	if (fileo == -1 || filew == -1)
		return (-1);

	close(fileo);
	return (1);
}
