#include <stdio.h>
#include <stdlib.h>

int currencyCoin(int coin)
{
    int dollar = coin * 850;
    return dollar;
}

int currencyDollar(int dollar)
{
    int coin = dollar / 850;
    return coin;
}


int main()
{
    int dorc;
    int cantidad;

    printf("Ingresa que cambio quieres\nUSD a CLP: 1\nCLP a UDS: 2 \n");
    scanf("%i", &dorc);

    if(dorc == 1)
    {
        printf("Ingresa la cantidad de USD: ");
        scanf("%i", &cantidad);

        int conversor = currencyCoin(cantidad);

        printf("\nEl resultado de la conversion es: %i \n", conversor);
    }

    else if(dorc == 2)
    {
        printf("Ingresa la cantidad de CLP: ");
        scanf("%i", &cantidad);

        int conversor = currencyDollar(cantidad);

        printf("\nEl resultado de la conversion es: %i \n", conversor);
    }

    else
        printf("Que onda viejo? \n");

    return 0;
}
