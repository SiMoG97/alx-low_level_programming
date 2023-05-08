#include "main.h"

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
 * error_file - checks if the files can be opened
 * @file_from: file to copy from.
 * @file_to: file to copy to.
 * @argv: argv.
 * Return: nothing.
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
		print_error("Error: Can't read from file %s\n", argv[1], 98);
	else if (file_to == -1)
		print_error("Error: Can't write to %s\n", argv[2], 99);
}

/**
 * main - copies the content of a file to another file.
 * @argc: argc
 * @argv: argv.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t buffer_size = 1024;
	char buffer[1024];

	if (argc != 3)
		print_error("%s\n", "Usage: cp file_from file_to", 97);

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);

	while (buffer_size == 1024)
	{
		buffer_size = read(file_from, buffer, 1024);
		if (buffer_size == -1)
			error_file(-1, 0, argv);

		if (write(file_to, buffer, buffer_size) == -1)
			error_file(0, -1, argv);
	}

	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
