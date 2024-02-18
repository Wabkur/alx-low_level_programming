#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - Read a text file and print it to the stdout
 * @filename: A pointer to the name of the file
 * @letters: Number of letters to read and print
 *
 * return: if function fail or !filename
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int w, j, r;
	char *besh;

	if (!filename)
		return (0);

	besh malloc(sizeof(char) * letters);
	if (!besh)
		return (0);

	w = open(filename, 0_RDONLY);
	j = read(w, besh, letters);
	r = write(STDOUT_FILENO, besh, j);

	if(w < 0 || j < 0 || r < 0 || r != j)
	{
		free(besh);
		return (0);
	}

	free(besh);
	close(0);

	return (w);
}
