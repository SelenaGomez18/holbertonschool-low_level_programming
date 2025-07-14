#ifndef _MAIN_H_
#define _MAIN_H_

#include <sys/types.h>
#include <elf.h>
#include <stdint.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

void print_error(const char *msg, const char *file);
void transfer_data(int fd_from, int fd_to,
                   const char *file_from, const char *file_to);
void copy_file(const char *file_from, const char *file_to);

void check_elf(unsigned char *ident);
uint16_t swap16(uint16_t v);
uint32_t swap32(uint32_t v);
uint64_t swap64(uint64_t v);
void print_magic(unsigned char ident[]);
void print_class(unsigned char ident[]);
void print_data(unsigned char ident[]);
void print_version(unsigned char ident[]);
void print_osabi(unsigned char ident[]);
void print_abi_version(unsigned char ident[]);
void print_type_and_entry(void *hdr, unsigned char ident[]);

int main(int argc, char *argv[]);

#endif