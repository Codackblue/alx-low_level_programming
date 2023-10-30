#include "main.h"

/**
 * append_text_to_file - text appended
 * @filename: pointer file
 * @text_content: my string
 *
 * Return: If the it  fails or filename is NULL - -1.
 *         If the function does not exis also null
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fo, fw, flen = 0;

	if (!filename)
		return (-1);

	if (text_content)
	{
		while (text_content[flen])
			flen++;
	}

	fo = open(filename, O_WRONLY | O_APPEND);
	fw = write(fo, text_content, flen);

	if (fo == -1 || fw == -1)
		return (-1);

	close(fo);

	return (1);
}
