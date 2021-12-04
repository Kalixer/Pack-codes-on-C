#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Despiertas en medio de la nada y hay 3 caminos \n");

    printf("Elige 1 si quieres ir por el camino asfaltado \n");
    printf("Elige 2 si quieres ir por el camino de vidrio \n");
    printf("Elige 3 si Quieres ir por el camino de metal \n");

    int option;

    scanf("%i", &option);

    switch(option)
    {
        case 1:
            printf("El camino asfaltado te lleva hacia una antigua civilizacion en ruinas, se case un muro y te aplasta \n");
            break;

        case 2:
            printf("El camino de vidrio te lleva hacia un puerta que al cruzar abre un agujero de gusano que te lleva a un concierto porque si\n");
            printf("Que no tiene logica? Es mi juego y hago la historia como se me de la gana \n");
            break;

        case 3:
            printf("El camino metalico te lleva a una nave espacial, pero como estaba rota al encenderla explota y mueres \n");
            printf("Game Over. Wanna try again?");
            break;

        default:
            printf("Te quedaste quieto, no hiciste nada y te moriste de hambre \n");
            break;
    }

    return 0;
}
