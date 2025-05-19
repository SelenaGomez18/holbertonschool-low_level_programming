#include "main.h"


/* Forward declaration of the helper function */
int sqrt_helper(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number to calculate the square root of.
 * Return: the natural square root, or -1 if it doesn't exist.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_helper(n, 0));
}

/**
 * sqrt_helper - recursively tries to find the square root.
 * @n: the original number.
 * @i: the current number being tested as a possible square root.
 * Return: the square root if found, or -1 if not.
 */
int sqrt_helper(int n, int i)

{
	if (i * i == n)
	{
		return (i);
	}
	if (i > n)
	{
		return (-1);
	}
	return (sqrt_helper(n, i + 1));
}
