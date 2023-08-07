#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1. only
 */
int create_file(const char *filenamee, char *text_contentt)
{
	int fd, w, len = 0;

	if (filenamee == NULL)
		return (-1);

	if (text_contentt != NULL)
	{
		for (len = 0; text_contentt[len];)
			len++;
	}

	fd = open(filenamee, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_contentt, len);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}

