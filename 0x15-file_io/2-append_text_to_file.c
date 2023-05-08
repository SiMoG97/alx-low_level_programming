#include "main.h"

/**
 * append_text_to_file - appends text to a file
 * @filename: the name of the file to append to
 * @text_content: the text to append to the file
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f;

	if (!filename)
		return (-1);

	f = open(filename, O_WRONLY | O_APPEND);

	if (f == -1)
		return (-1);

	if (text_content && write(f, text_content, strlen(text_content)) == -1)
	{
		close(f);
		return (0);
	}

	close(f);
	return (1);
}
