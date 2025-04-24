#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 *
 * @p: pointer to the first integer
 * @q: pointer to the second integer
 *
 * Return - void
 */
void swap_int(int *p, int *q)
{
	int c;

	c = *p;
	*p= *q;
	*q = c;
}
