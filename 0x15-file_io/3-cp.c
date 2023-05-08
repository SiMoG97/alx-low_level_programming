#include "main.h"

#define BUFFER_SIZE 1024

void print_error(char *message, char *filename, int exit_code);
void close_file(int fd, char *filename);

/**
 * print_error - Prints an error message and exits the program
 * @message: The error message to print
 * @filename: The filename associated with the error
 * @exit_code: The exit code to use when exiting the program
 */

void print_error(char *message, char *filename, int exit_code)
{
	dprintf(STDERR_FILENO, message, filename);
	exit(exit_code);
}

/**
 * close_file - Closes a file descriptor
 * @fd: The file descriptor to close
 * @filename: The name of the file associated with the file descriptor
 */

void close_file(int fd, char *filename)
{
	if (close(fd) == -1)
	{
		print_error("Error: Can't close file %s: %s\n", filename, 100);
	}
}

/**
 * main - Copies the contents of one file to another file
 * @argc: The number of arguments passed to the program
 * @argv: An array of strings containing the arguments
 *
 * Return: 0 on success, or an error code on failure
 */

int main(int argc, char *argv[])
{
	int file_from, file_to;
	struct stat stat_buf;
	char buffer[BUFFER_SIZE];
	ssize_t num_read;

	if (argc != 3)
	{
		print_error("Usage: cp file_from file_to\n", "", 97);
	}

	file_from = open(argv[1], O_RDONLY);

	if (file_from == -1)
	{
		print_error("Error: Can't read from file %s: %s\n", argv[1], 98);
	}

	if (stat(argv[2], &stat_buf) != -1)
	{
		if (truncate(argv[2], 0) == -1)
		{
			print_error("Error: Can't truncate file %s: %s\n", argv[2], 99);
		}
	}

	file_to = open(argv[2], O_WRONLY | O_CREAT, 0664);

	if (file_to == -1)
	{
		print_error("Error: Can't write to file %s: %s\n", argv[2], 99);
	}

	while ((num_read = read(file_from, buffer, BUFFER_SIZE)) > 0)
	{
		if (write(file_to, buffer, num_read) == -1)
		{
			print_error("Error: Can't write to file %s: %s\n", argv[2], 99);
		}
	}

	if (num_read == -1)
	{
		print_error("Error: Can't read from file %s: %s\n", argv[1], 98);
	}

	close_file(file_from, argv[1]);
	close_file(file_to, argv[2]);

	return (0);
}
