#include "main.h"
size_t strilen(char *str);
/**
 * append_text_to_file - funtion that appends text at the end of the file
 * @filename: name of the file to be appended into
 * @text_content: the text to appended into tbe filename file
 * Return: 1 on success and -1on failure
 * don't create a file if it does not exist
 * returns -1 if i dont have the right permision
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t writ;
	int op;


	if (filename == NULL)
		return (-1);
	op = open(filename, O_WRONLY | O_APPEND);
	if (op == -1)
		return (-1);
	if (text_content != NULL)
		writ = write(op, text_content, strilen(text_content));
	close(op);
	if (writ == -1)
		return (-1);
	return (1);
}
/**
 * strilen -funtion to return the length of a string
 * @str: the given string
 * Return: the length of the string
 */
size_t strilen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}
