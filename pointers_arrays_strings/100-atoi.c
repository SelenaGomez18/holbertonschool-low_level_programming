#include "main.h"

/**
 * _atoi - Converts a string to an integer,
 * handling integer overflow and underflow.
 * @s: The string to convert.
 *
 * Return: The converted integer value, or the overflow/underflow boundaries.
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int result = 0;
	int found_digit = 0;

	while (s[i] != '\0')
	{
		/* Check for + or - signs before the digits */
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] == '+')
			; /* Do nothing for + */
		else if (s[i] >= '0' && s[i] <= '9')
		{
			found_digit = 1;

			if (result > (2147483647 - (s[i] - '0')) / 10)
			{
				return (sign == 1 ? 2147483647 : -2147483648);
			}

			result = result * 10 + (s[i] - '0');
		}
		else if (found_digit)
		{
			/* Stop parsing once digits are done */
			break;
		}
		i++;
	}

	return (sign * result);
}
