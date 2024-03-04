#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the stdout
 * @filename: pointer to the name of the file
 * @letters: num of letters to read and print
 *
 * Return: the number of letters printed, or 0 if it failed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t m, w, t;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	m = open(filename, O_RDONLY);
	w = read(m, buf, letters);
	t = write(STDOUT_FILENO, buf, w);

	if (m == -1 || w == -1 || t == -1 || t != w)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(m);

	return (w);
}
