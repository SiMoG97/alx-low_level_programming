#include "main.h"

/**
 * create_file - creates a new file with the specified content
 * @filename: name of the file to creat
 * @text_content: content to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file_desc;

	if (!filename)
		return (-1);

	file_desc = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (file_desc == -1)
		return (-1);

	if (text_content)
		write(file_desc, text_content, strlen(text_content));

	close(file_desc);
	return (1);
}
