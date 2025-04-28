/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The converted integer value. Returns 0 if no digits found.
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

			/* Convert the digit character to int and build the result */
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
