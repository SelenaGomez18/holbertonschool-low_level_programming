#include<stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase.
 *
 * Description: This function prints all the numbers to base 16.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	char b;

	for (a = 0; a <= 9; a++)
	{
		putchar('0' + a);
	}
	for (b = 'a'; b <= 'f'; b++)
	{
		putchar(b);
	}
	putchar(10);

	return (0);
}
