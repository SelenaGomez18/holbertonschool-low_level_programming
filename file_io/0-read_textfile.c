#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd;
    char *buffer = 0;
    ssize_t r, w;

    if (!filename)
        return (0);
    
    fd = open(filename, O_RDONLY);
    if (fd < 0)
        return (0);
    
    buffer = malloc(letters);
    if (!buffer)
    {
        close(fd);
        return (0);
    }

    r = read(fd, buffer, letters);
    w = write(STDOUT_FILENO, buffer, r);

    free(buffer);
    close(fd);

    return ((r < 0 || w < 0 || w != r) ? 0 : w);
}
