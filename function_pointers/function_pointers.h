#ifndef _MAIN_H_
#define _MAIN_H_
#include <stddef.h>

/*
 * Structs, enums and unions definitions
 * Typedefs
 * Function prototypes
 */

void print_name(char *, void (*)(char *));
void array_iterator(int *, size_t, void (*)(int));
int int_index(int *, int, int (*)(int));

#endif /*_MAIN_H_ */
