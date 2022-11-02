#include "main.h"
#include <string.h>
/**
 * append_text_to_file - appends to file
 * @filename: name of file
 * @text_content: content of text
 * Return: int value
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	wr = write(fd, text_content, strlen(text_content));
	if (wr == -1)
		return (-1);
	close(fd);
	return (1);
}
