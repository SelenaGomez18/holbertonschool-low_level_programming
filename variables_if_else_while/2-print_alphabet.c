#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Description: This function prints all the lowercase letters of the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letra;

/* Imprimir las letras del abecedario en minúsculas */
for (letra = 'a'; letra <= 'z'; letra++)
{
putchar(letra);  /* Imprime cada letra */
}
putchar('\n');  /* Añadir un salto de línea al final */
return (0);
}
