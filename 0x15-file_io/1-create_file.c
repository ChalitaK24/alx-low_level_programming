#include "main.h"

/**
 * create_file -  creates a new file with specific properties 
 *
 *
 * Returns: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t n_written;
	size_t ln = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		while (text_content[ln] != '\0')
		{
			ln++;
		}

		n_written = write(fd, text_content, ln);

		if (n_written == -1 || n_written != (ssize_t)ln)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
