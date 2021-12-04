#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Multiplicar todos los elementos del arreglo\n");

    int val[5];

    printf("Inggresa los valores: \n");

    printf("Valor [0]: ");
    scanf("%i", &val[0]);

    printf("Valor [1]: ");
    scanf("%i", &val[1]);

    printf("Valor [2]: ");
    scanf("%i", &val[2]);

    printf("Valor [3]: ");
    scanf("%i", &val[3]);

    printf("Valor [4]: ");
    scanf("%i", &val[4]);

    int resultado = val[0] * val[1] * val[2] * val[3] * val[4];


    printf("El resultado es: %i", resultado);

    return 0;
}
