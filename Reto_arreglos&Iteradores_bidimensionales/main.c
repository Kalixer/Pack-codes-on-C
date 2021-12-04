#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Reto Arreglos e Iteradores Bidimensionales\n\n");

    float promedio;

    float matriz[5][6] = {  {6.2, 8.3, 9.3, 7.0, 6.6, 0.0},
                            {7.3, 9.7, 6.2, 7.9, 8.4, 0.0},
                            {8.2, 7.2, 9.7, 8.6, 7.4, 0.0},
                            {9.8, 7.4, 8.8, 9.7, 8.5, 0.0},
                            {7.3, 6.3, 6.7, 6.7, 6.8, 0.0} };

    for(int i = 0; i < 5; i++)
    {
        promedio = 0.0;

        for(int j = 0; j < 5; j++)
        {
            printf("La sumatoria del array[%i][%i], es: %f \n", i, j, matriz[i][j]);
            promedio += matriz[i][j];
        }
        promedio = promedio / 5;

        printf("\n\t El primedio de la fila %i es: %f\n\n", i, promedio);
    }


    return 0;
}
