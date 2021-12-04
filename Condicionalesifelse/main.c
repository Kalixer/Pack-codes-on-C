#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Adivina el numero que estoy pensando \n");
    printf("Es un numero entre 1-10 \n\n");

    int n_correcto, n_usuario;
    n_correcto = 5;

    scanf("%i", &n_usuario);

    printf("\n");

    if(n_usuario == n_correcto)
        printf("Adivinaste");
    else
        printf("Nope, ese no era");

    printf("\n");
    return 0;
}
