#ifndef _MAIN_H_
#define _MAIN_H_

#include <sys/types.h>
/*
 * Structs, enums and unions definitions
 * Typedefs
 * Function prototypes
 */
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void print_error(int code, const char *msg, const char *file);
void transfer_data(int fd_from, int fd_to, const char *file_from, const char *file_to);
void copy_file(const char *file_from, const char *file_to);
int main(int argc, char *argv[]);

#endif /*_MAIN_H_ */
