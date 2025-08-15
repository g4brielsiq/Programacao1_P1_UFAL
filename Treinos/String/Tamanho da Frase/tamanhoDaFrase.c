#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

// Fazer um programa para ler uma string e calcular seu tamanho (número de caracteres). Exemplo: Seja a string "o rato", então seu tamanho é 6.

int main()
{
    char string[100];
    fgets(string, sizeof(string), stdin);

    for (int i = 0; i <= 99; i++)
    {
        if (string[i] == '\n')
        {
            printf("%d", i);

            return 0;
        }
    }

    return 0;
}