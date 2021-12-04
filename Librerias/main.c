#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"

int main()
{
    printf("Librerias!\n");

    float firstValue = 10;
    float secondValue = 15;
    float result;
    int option;

    printf("Soy una calculadora \n");
    printf("Qué operacion desea realizar? \n");
    printf("1.- Suma \n");
    printf("2.- Resta \n");
    printf("3.- Multiplicar \n");
    printf("4.- Dividir \n");

    scanf("%i", &option);

    switch(option)
    {
        case 1:
            result = additiones(firstValue, secondValue);
        break;
        case 2:
            result = sustractiones(firstValue, secondValue);
        break;
        case 3:
            result = multiplicationes(firstValue, secondValue);
        break;
        case 4:
            result = divisiones(firstValue, secondValue);
        break;
    }

    printf("El resultado es: %f \n", result);

    return 0;
}
