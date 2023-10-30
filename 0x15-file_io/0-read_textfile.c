#include "main.h"

/**
 * read_textfile - reads my file in texts
 * @filename: creates a pointer
 * @letters: numbees and letter
 *           function should read and print.
 * Return: fails return null
 *         fo/fw - the byte number it can peint
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fo, fr, fw;
	char *fbuf;

	if (!filename)
		return (0);

	fbuf = malloc(sizeof(char) * letters);
	if (!fbuf)
		return (0);

	fo = open(filename, O_RDONLY);
	fr = read(fo, fbuf, letters);
	fw = write(STDOUT_FILENO, fbuf, fr);

	if (fo == -1 || fr == -1 || fw == -1 || fw != fr)
	{
		free(fbuf);
		return (0);
	}

	free(fbuf);
	close(fo);

	return (fw);
}
