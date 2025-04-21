#include <stdio.h>

/**
 * main - Imprime los números del 1 al 100 siguiendo la lógica FizzBuzz
 *
 * Para cada número del 1 al 100:
 * - Imprime "Fizz" si es múltiplo de 3
 * - Imprime "Buzz" si es múltiplo de 5
 * - Imprime "FizzBuzz" si es múltiplo de ambos
 * - Imprime el número si no es múltiplo de 3 ni de 5
 *
 * Return: 0 si el programa termina correctamente
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0 && a % 5 == 0)
			printf("FizzBuzz");
		else if (a % 3 == 0)
			printf("Fizz");
		else if (a % 5 == 0)
			printf("Buzz");
		else
			printf("%d", a);

		if (a < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
