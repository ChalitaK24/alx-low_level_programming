#include "main.h"

#define BUFFER_SIZE 1024
/**
 * append_text_to_file - appends text at the end of a file
 *
 *
 * Return:1 on success and -1 on failure
 */

void err_handle(int exit_code, const char *format, ...)
{
	va_list args;
	va_start(args, format);

	vdprintf(STDERR_FILENO, format, args);

	va_end(args);
	exit(exit_code);
}

int main(int argc, char *argv[])
{
	int file_fr, file_to;
	ssize_t r_bytes, w_bytes;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		err_handle(97, "Usage: cp file_from file_to\n", NULL);
	}


	file_fr = open(argv[1], O_RDONLY);

	if (file_fr == -1)
	{
		err_handle(98, "Error: Can't read from file %s\n", argv[1]);
	}

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
	{
		close(file_fr);
		err_handle(99, "Error: Can't write to file %s\n", argv[2]);
	}

	while ((r_bytes = read(file_fr, buffer, BUFFER_SIZE)) > 0)
	{
		w_bytes = write(file_to, buffer, r_bytes);
		if (w_bytes != r_bytes)
		{
			close(file_fr);
			close(file_to);
			err_handle(99, "Error: Can't write to file %s\n", argv[2]);
		}
	}

	if (r_bytes == -1)
	{
		close(file_fr);
		close(file_to);
		err_handle(98,"Error: Can't read from file %s\n", argv[1]);
	}

	if (close(file_fr) == -1)
	{
		err_handle(100, "Error: Can't close fd %d\n", file_fr);
	}

	if (close(file_to) == -1)
	{
		err_handle(100, "Error: Can't close fd %d\n", file_to);
	}

	return (0);
}
