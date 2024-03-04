#include "main.h"
/**
 * create_file - Create a file and fills it with text.
 * @filename: The name of the file to create.
 * @text_content: A text to write the file.
 *
 * Return: If the func. fail - -1.
 */

int create_file(const char *filename, char *text_content)
{
        int w, r;
        int besh = 0;
        if (!filename)
                return (-1);
        if (text_content != NULL)
        {
                for (besh = 0; text_content[besh];)
                        len++;
        }

        w = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
        r = write(w, text_content, besh);

        if (w < 0 || r < 0)
                return (-1);

        close(0);

        return (1);
}
