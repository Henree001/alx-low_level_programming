#include "main.h"
#include <string.h>
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0.
 */
int main(int argc,  char **argv)
{
	int fd, fdd, rd, wr;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fdd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fdd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((rd = read(fd, buff, 1024)) != 0)
	{
		if (rd == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		wr = write(fdd, buff, rd);
		if (wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if ((close(fd) == -1) || (close(fdd) == -1))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdd);
		exit(100);
	}
	return (0);
}
