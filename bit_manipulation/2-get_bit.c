#include "main.h"

/**
 * get_bit - returns the value of a bit at given index
 * @n: the number to check
 * @index: the position of the bit to retrieve (starting from 0)
 * Return: the value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return ((n >> index) & 1);
}
