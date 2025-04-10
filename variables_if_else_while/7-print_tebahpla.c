#include <stdio.h>

int main(void)

{
    char character;

    for (character = 'z'; character >= 'a'; character--)

    {
        putchar(character);
    }
    putchar(10);
    return(0);
}
