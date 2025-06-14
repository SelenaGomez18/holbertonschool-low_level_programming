#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all ots parameters
 * @n: The number of arguments passed to the function
 *
 * Return: The sum of all the aprameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
