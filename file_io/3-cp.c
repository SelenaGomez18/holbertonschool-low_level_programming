#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

#define BUF_SIZE 1024

/**
 * print_error_and_exit - prints error message and exits
 * @code: exit code
 * @msg: error message format string
 * @arg: argument for message (filename or fd as int casted to void*)
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
 * open_files - opens source and destination files, returns 0 on success
 * @file_from: source file path
 * @file_to: destination file path
 * @fd_from: pointer to store source fd
 * @fd_to: pointer to store destination fd
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
 * copy_data - copies data from fd_from to fd_to, exits on failure
 * @fd_from: source file descriptor
 * @fd_to: destination file descriptor
 */
void copy_data(int fd_from, int fd_to)
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
			print_error_and_exit(99, "Error: Can't write to file\n", NULL);
		}
	}

	if (r == -1)
	{
		close(fd_from);
		close(fd_to);
		print_error_and_exit(98, "Error: Can't read from file\n", NULL);
	}
}

/**
 * close_fds - closes file descriptors and handles errors
 * @fd_from: source file descriptor
 * @fd_to: destination file descriptor
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
 * main - entry point, checks args and runs copy process
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, exits on error
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	open_files(argv[1], argv[2], &fd_from, &fd_to);
	copy_data(fd_from, fd_to);
	close_fds(fd_from, fd_to);

	return (0);
}
