#include "main.h"

/**
 * append_text_to_file -  appends text at the end of a file
 * @filename: The name of the file to append
 * @text_content: The string to add to the appending file
 * Return: The 1 on success or -1 if it fails
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int wp;
	int w;
	int len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	wp = open(filename, O_WRONLY | O_APPEND);

	w = write(wp, text_content, len);

	if (wp == -1 || w == -1)
		return (-1);
	close(wp);
	return (1);
}
