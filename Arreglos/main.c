#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Arreglos unidimensionales\n");

    int integerList[3];
    integerList[0] = 4;
    integerList[1] = 5;
    integerList[2] = 6;

    float floatList[5] = {23.4, 34.5, 45.6, 21.8, 56.7};

    char charlist[4];
    charlist[0] = 'K';
    charlist[1] = '4';
    charlist[2] = 'L';
    charlist[3] = '1';
    charlist[4] = 'X';
    charlist[5] = 'e';
    charlist[6] = 'R';

    printf("\n Mi primer entero: \t\t %i %i %i", integerList[0], integerList[1], integerList[2]);
    printf("\n Mi ultimo flotante: \t\t %f ", floatList[2]);
    printf("\n Mi lista de caracteres: \t\t %c%c%c%c%c%c%c \n", charlist[0], charlist[1], charlist[2], charlist[3], charlist[4], charlist[5], charlist[6]);

    int maxElementes[5] = {0, 12, 5, 9, 55};

    return 0;
}
