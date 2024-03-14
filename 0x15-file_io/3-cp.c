#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates 1024 bytes for a buffer
 * @file: The name of the file buffer is storing chars
 *
 * Return: A pointer to newly allocated buffer
 */
char *create_buffer(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buf);
}

/**
 * close_file - Closes file descriptors
 * @fd: The file descriptor to be closed
 */
void close_file(int fd)
{
	int r;

	r = close(fd);

	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copy the contents of file to another file
 * @argc: The number of arguments supplied to program
 * @argv: An array of pointers to the arguments
 *
 * Return: 0 if success
 *
 * Description: If the argument count is incorrect - exit code 97
 *              If file from does not exist or cannot be read - exit code 98
 *              If file to cannot be created or written to - exit code 99
 *              If file to or file from cannot be closed - exit code 100
 */
int main(int argc, char *argv[])
{
	int b, p, m, w;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = create_buffer(argv[2]);
	b = open(argv[1], O_RDONLY);
	m = read(b, buf, 1024);
	p = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (b == -1 || m == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}

		w = write(p, buf, m);
		if (p == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}

		m = read(b, buf, 1024);
		p = open(argv[2], O_WRONLY | O_APPEND);

	} while (m > 0);

	free(buf);
	close_file(b);
	close_file(p);

	return (0);
}
