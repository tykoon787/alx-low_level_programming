#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/uio.h>
#include <unistd.h>

/**
 * read_textfile - A function that reads a text file and prints
 * to the POSIX STDOUT
 * @filename: File to be read
 * @letters: The number of letters to read and print
 * Return: The number of letters read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd_open, fd_read, fd_write;
	char buff[letters];

	if (filename == NULL)
		return (0);

	/* Open the file for read only mode */
	fd_open = open(filename, O_RDONLY);
	if (fd_open == -1)
		return (1);

	/* Read and store to buffer */
	fd_read = read(fd_open, buff, letters);
	if (fd_read == -1)
		return (1);

	/* Write to std_out */
	fd_write = write(STDOUT_FILENO, buff, fd_read);
	if (fd_read < 0)
		return (1);

	close(fd_open);

	return ((ssize_t)fd_write);
}
