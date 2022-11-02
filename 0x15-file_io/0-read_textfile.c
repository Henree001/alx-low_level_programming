#include <main.h>
/**
 * read_textfile - reads a textfile
 * @filename: file to read
 * @letters: amount of bytes to read
 * Return: printed letters count
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd, wr;
	char *buff;


	buff = malloc(letters);
	if (buff == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDWR);
	if (fd == NULL)
		return (0);
	rd = read(fd, buff, letters);
	if (rd == -1)
		return (0);
	wr = write(1, buff, rd);
	if (wr == -1)
		return (0);
	close(fd);
	free(buff);
	return (wr);
}

