#include "main.h"
#include <stdlib.h>


/**
 * read_textfile - reads a text file and prints
 * @filename: The file to read
 * @letters: The letters to read
 * Return: w- the expected amount of bytes, 0 or Null if it fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t v;
	ssize_t w;
	ssize_t ts;

	ts = open(filename, O_RDONLY);
	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	v = read(ts, buf, letters);
	w = write(STDOUT_FILENO, buf, v);

	free(buf);
	close(ts);
	return (w);
}
