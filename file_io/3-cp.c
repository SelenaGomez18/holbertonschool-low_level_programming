#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <string.h>

#define BUF_SIZE 1024

/**
 * print_error_and_exit - prints error message and exits program
 * @code: exit code to use
 * @msg: format string for error message
 * @arg: argument for format string (filename or fd casted to void*)
 */
void print_error_and_exit(int code, char *msg, void *arg)
{
	if (msg && arg)
	{
		if (code == 100)
			dprintf(STDERR_FILENO, msg, (int)(long)arg);
		else
			dprintf(STDERR_FILENO, msg, (char *)arg);
	}
	exit(code);
}

/**
 * open_files - opens source and destination files
 * @file_from: path to source file
 * @file_to: path to destination file
 * @fd_from: pointer to store source file descriptor
 * @fd_to: pointer to store destination file descriptor
 *
 * Opens file_from for reading and file_to for writing (create/truncate).
 * Exits with error if any open fails.
 */
void open_files(char *file_from, char *file_to, int *fd_from, int *fd_to)
{
	mode_t old_mask = umask(0);

	*fd_from = open(file_from, O_RDONLY);
	if (*fd_from == -1)
		print_error_and_exit(98, "Error: Can't read from file %s\n", file_from);

	*fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	umask(old_mask);

	if (*fd_to == -1)
	{
		close(*fd_from);
		print_error_and_exit(99, "Error: Can't write to %s\n", file_to);
	}
}

/**
 * copy_data - copies data from one file descriptor to another
 * @fd_from: source file descriptor
 * @fd_to: destination file descriptor
 * @file_to: destination filename for error messages
 *
 * Reads from fd_from and writes to fd_to until done.
 * Exits with error on read or write failure.
 */
void copy_data(int fd_from, int fd_to, char *file_to)
{
	ssize_t r, w;
	char buf[BUF_SIZE];

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

	if (r == -1)
	{
		close(fd_from);
		close(fd_to);
		print_error_and_exit(98, "Error: Can't read from file %s\n", file_to);
	}
}

/**
 * close_fds - closes two file descriptors and exits on failure
 * @fd_from: source file descriptor
 * @fd_to: destination file descriptor
 *
 * Closes both descriptors; exits with code 100 if close fails.
 */
void close_fds(int fd_from, int fd_to)
{
	if (close(fd_from) == -1)
		print_error_and_exit(100,
			"Error: Can't close fd %d\n", (void *)(long)fd_from);

	if (close(fd_to) == -1)
		print_error_and_exit(100,
			"Error: Can't close fd %d\n", (void *)(long)fd_to);
}

/**
 * main - entry point, checks arguments and performs file copy
 * @argc: argument count
 * @argv: argument vector
 *
 * Expects exactly 2 arguments: source and destination file paths.
 * Exits on invalid arguments or any file operation error.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	if (strcmp(argv[1], argv[2]) == 0)
	{
		dprintf(STDERR_FILENO, "Error: source and destination files are the same\n");
		exit(99);
	}

	open_files(argv[1], argv[2], &fd_from, &fd_to);
	copy_data(fd_from, fd_to, argv[2]);
	close_fds(fd_from, fd_to);

	return (0);
}
