#include <stdio.h>
#include <stdlib.h>

int main()
{
    float faren;
    float celcius;

    printf("Farenheit/Celsius converter \n \n");

    printf("Ingresa la temperatura en Farenheit: ");
    scanf("%f", &faren);

    celcius = ((faren - 32) / 1.8);

    printf("\nLa temperatura en Celcius es: %f", celcius);

    return 0;
}
