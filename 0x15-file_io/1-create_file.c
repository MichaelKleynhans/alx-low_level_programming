#include "main.h"

/**
 * Creates a new file with the given name and writes the specified string to it
 *
 * @param filename The name of the file to create.
 * @param text_content The string to write to the file.
 *
 * @return 1 if the file was successfully created and written to, or -1 if an error occured.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd,text_content, len);

	if (fd == -1 || w == -1)
		return(-1)

	close(fd);

	return;
}
