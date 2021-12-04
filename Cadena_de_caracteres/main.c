#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Cadena de Caracteres\n");

    char nameC[50];

    int size;

    printf("Ingresa el nombre con gets: \n");

    gets(nameC);

    printf("El nombre es: ");
    puts(nameC);

    size = strlen(nameC);

    printf("\nEl tamano de la cadena es: %i \n", size);

    return 0;
}
