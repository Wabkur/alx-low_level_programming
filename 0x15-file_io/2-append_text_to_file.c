#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: Name of the file to append.
 * @text_content: NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int R, besh, lgt;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		R = open(filename, O_WRONLY | O_APPEND);
		if (R == -1)
			return (-1);
		lgt = 0;
		while (*(text_content + lgt) != '\0')
			lgt++;
		besh = write(R, text_content, lgt);
		if (besh == -1)
		{
			close(R);
			write(STDOUT_FILENO, "fails", 5);
			return (-1);
		}
	}
	close(R);
	return (1);
}
