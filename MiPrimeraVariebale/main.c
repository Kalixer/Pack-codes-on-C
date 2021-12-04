#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int x;
    int y;

    int aux;

    x = 3;
    y = 5;


    printf("El valor de x es: %i \n", x);
    printf("El valor de y es: %i \n \n", y);

    aux = x;
    x = y;
    y = aux;

    printf("El valor intercambiado de x es: %i \n", x);
    printf("El valor intercambiado de y es: %i", y);

    return 0;
}
