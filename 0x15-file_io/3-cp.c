#include "main.h"
/**
 * print_err - Prints an error message and exits the program
 * @msg: The error message to print
 * @fname: The filename associated with the error
 * @exit_code: The exit code to use when exiting the program
 */

void print_err(char *msg, char *fname, int exit_code)
{
	dprintf(STDERR_FILENO, msg, fname);
	exit(exit_code);
}

/**
 * close_file - Closes a file descriptor
 * @fd: The file descriptor to close
 * @fname: The name of the file associated with the file descriptor
 */

void close_file(int fd, char *fname)
{
	if (close(fd) == -1)
		print_err("Error: Can't close file %s: %s\n", fname, 100);
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
	ssize_t num_r;
	struct stat stat_buf;
	int f_from, f_to;
	char buffer[1024];

	if (argc != 3)
		print_err("Usage: cp file_from file_to\n", "", 97);

	f_from = open(argv[1], O_RDONLY);

	if (f_from == -1)
		print_err("Error: Can't read from file %s: %s\n", argv[1], 98);

	if (stat(argv[2], &stat_buf) != -1 && truncate(argv[2], 0) == -1)
		print_err("Error: Can't truncate file %s: %s\n", argv[2], 99);

	f_to = open(argv[2], O_WRONLY | O_CREAT, 0664);

	if (f_to == -1)
		print_err("Error: Can't write to file %s: %s\n", argv[2], 99);

	while ((num_r = read(f_from, buffer, 1024)) > 0)
	{
		if (write(f_to, buffer, num_r) == -1)
			print_err("Error: Can't write to file %s: %s\n", argv[2], 99);
	}

	if (num_r == -1)
		print_err("Error: Can't read from file %s: %s\n", argv[1], 98);

	close_file(f_from, argv[1]);
	close_file(f_to, argv[2]);

	return (0);
}
