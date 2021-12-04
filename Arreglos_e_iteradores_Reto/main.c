#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Encuentra el numero mayor!\n\n");

    int tamano;
    int numeroMayor = 0;

    printf("Ingresa el tamano del arreglo: ");
    scanf("%i", &tamano);
    int arreglo[tamano];

    printf("\nIngresa los valores: \n");

    for(int i = 0; i < tamano; i++)
    {
        printf("Valor [%i]: ", i);
        scanf("%i", &arreglo[i]);

        if(arreglo[i] > numeroMayor)
        {
            numeroMayor = arreglo[i];
        }
    }


    printf("El numero mayor es: %i", numeroMayor);

    return 0;
}
