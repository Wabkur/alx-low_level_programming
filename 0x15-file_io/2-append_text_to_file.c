#include "main.h"
/**
 * append_text_to_file - Append text at the end of a file
 * @filename: File to append the text
 * @text_content: Content to add into the file
 *
 * Return: 1 if success and -1 if failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int m, t, wab = 0;

	if (filename == 0)
		return (-1);

	if (text_content != NULL)
	{
		for (wab = 0; text_content[wab];)
			wab++;
	}

	m = open(filename, O_WRONLY | O_APPEND);
	t = write(m, text_content, wab);

	if (m == -1 || t == -1)
		return (-1);

	close(m);

	return (-1);
}
