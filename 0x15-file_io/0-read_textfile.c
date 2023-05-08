#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file to read
 * @letters: the number of letters to read and print
 *
 * Return: the actual number of letters read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *f;
	char *buffer;
	ssize_t bytes_read;

	if (!filename)
		return (0);

	f = fopen(filename, "r");
	if (!f)
		return (0);

	buffer = malloc((letters + 1));
	if (!buffer)
	{
		fclose(f);
		return (0);
	}

	bytes_read = fread(buffer, sizeof(char), letters, f);
	if (bytes_read <= 0 || write(STDOUT_FILENO, buffer, bytes_read) != bytes_read)
		bytes_read = 0;

	fclose(f);
	free(buffer);
	return (bytes_read);
}
