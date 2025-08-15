#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
int main()
{
    int casos;
    scanf("%d", casos);

    for (int i = 0; i < casos; i++)
    {
        char numero[10 ^ 100];
        scanf("%s", numero);

        int indiceFinal = 0;

        for (int t = 0; t < (10 ^ 100); t++)
        {
            if (numero[t] == '\0')
            {
                indiceFinal = t;
            }
        }

        for (int i = 0; i < indiceFinal; i++)
        {
            if (numero[i] < numero[i + 1])
            {
                int aux = numero[i];
                numero[i] = numero[i + 1];
                numero[i + 1] = aux;
            }
        }

        
    }

    return 0;
}