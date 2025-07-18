#include "main.h"

/**
 * flip_bits - Counts the number of bits to flip to convert n to m
 * @n: The first number
 * @m: The second number
 *
 * Return: The number of bits that need to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int count = 0;

	while (xor)
	{
		count += xor & 1;
		xor >>= 1;
	}

	return (count);
}
