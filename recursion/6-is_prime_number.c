#include "main.h"

/* Helper function declaration */
int check_prime(int n, int i);

/**
 * is_prime_number - returns 1 if n is a prime number, otherwise 0.
 * @n: the number to check
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, 2));
}

/**
 * check_prime - recursively checks if a number is divisible
 * @n: the number to check
 * @i: the current divisor being tested
 * Return: 1 if prime, 0 otherwise
 */
int check_prime(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (check_prime(n, i + 1));
}
