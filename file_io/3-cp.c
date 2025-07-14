#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

#define BUF_SIZE 1024

/**
 * print_error_and_exit - prints an error message with file name and exits
 * @code: exit code
 * @msg: error message format string
 * @file: file name to print in message
 */
void print_error_and_exit(int code, char *msg, char *file)
{
	dprintf(STDERR_FILENO, msg, file);
	exit(code);
}

/**
 * print_error_fd_and_exit - prints an error message with fd and exits
 * @code: exit code
 * @fd: file descriptor causing error
 */
void print_error_fd_and_exit(int code, int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(code);
}

/**
 * copy_file - copies content from file_from to file_to
 * @file_from: source file path
 * @file_to: destination file path
 */
void copy_file(char *file_from, char *file_to)
{
	int fd_from, fd_to;
	ssize_t r, w;
	char buf[BUF_SIZE];
	mode_t old_mask;

	/* open source file for reading */
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		print_error_and_exit(98, "Error: Can't read from file %s\n", file_from);

	/* set permissions mask, open destination file with truncation */
	old_mask = umask(0);
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	umask(old_mask);

	if (fd_to == -1)
	{
		close(fd_from);
		print_error_and_exit(99, "Error: Can't write to %s\n", file_to);
	}

	/* read from source and write to destination */
	while ((r = read(fd_from, buf, BUF_SIZE)) > 0)
	{
		w = write(fd_to, buf, r);
		if (w != r)
		{
			close(fd_from);
			close(fd_to);
			print_error_and_exit(99, "Error: Can't write to %s\n", file_to);
		}
	}

	/* check read error */
	if (r == -1)
	{
		close(fd_from);
		close(fd_to);
		print_error_and_exit(98, "Error: Can't read from file %s\n", file_from);
	}

	/* close file descriptors, check errors */
	if (close(fd_from) == -1)
		print_error_fd_and_exit(100, fd_from);
	if (close(fd_to) == -1)
		print_error_fd_and_exit(100, fd_to);
}

/**
 * main - program entry point, validates args and copies files
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, exits on failure
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_file(argv[1], argv[2]);
	return (0);
}
