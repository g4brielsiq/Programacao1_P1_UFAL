#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    char nome[120];
    fgets(nome, 120, stdin);

    printf("Seja muito bem-vindo %s", nome);
    return 0;
}