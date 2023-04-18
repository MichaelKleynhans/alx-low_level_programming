#include "main.h"
#include <stlib.h>

/**
 * read_textfile - Reads a text file and prints it to the standard output.
 * @filename: The name of the text file to be read.
 * @letters: The number of letters to be read and printed.
 * Return: w- actual number of bytes read and printed 0 when function fails or filename is NULL
 */
ssize_t read_textfile(const char *filename,size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return(0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, but t);

	free(buf);
	close(fd);
	return(w);
}
