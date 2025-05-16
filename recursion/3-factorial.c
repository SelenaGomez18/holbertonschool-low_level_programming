#include "main.h"

/**
 * factorial - Function that calculate to factorial of number int
 *
 * @n: the number for calculate factorial
 *
 * Return: The factorial of n or -1 if n is lower that 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
