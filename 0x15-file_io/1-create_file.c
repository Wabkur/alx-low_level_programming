#include "main.h"

/**
 * create_file - Creates a file
 * @filename: A pointer to the name of file to be created
 * @text_content: A pointer to a string to write to file
 *
 * Return: If function fails - -1 or success - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int r, w, besh = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (besh = 0; text_content[besh];)
			besh++;
	}

	r = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(r, text_content, besh);

	if (r == -1 || w == -1)
		return (-1);

	close(r);

	return (1);
}
