#include "main.h"


int clear_bit(unsigned long int *n, unsigned int index)
{
        if (index >= sizeof(n) * 8)
		return (-1);
    
    *n = *n & ~(1UL << index);
    return (1);
}
