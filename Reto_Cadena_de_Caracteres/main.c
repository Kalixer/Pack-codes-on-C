#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Reto Cadena de Caracteres \n\n");

    char palabra[50];
    char palabraInv[50];

    int size;
    int inversor = 0;

    printf("Escribe una frase y yo la invierto: \n");
    gets(palabra);

    size = strlen(palabra);

    for(int i=0; i<size; i++)
    {
        inversor += 1;
        palabraInv[i] = palabra[size - inversor];
    }

    printf("\nLa palabra invertida es esta: \n");
    puts(palabraInv);

    return 0;
}
