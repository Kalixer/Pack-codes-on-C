#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Ciclo Do-While\n");

    int n = 1;
    int limit;

    printf("Ingresa el numero limite: ");
    scanf("%i", &limit);

    do
    {
        printf("\n %i", n);
        n += 1;

    }while(n <= limit);

    return 0;
}
