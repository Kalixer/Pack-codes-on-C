#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Condicion if\n");

    float valA, valB, valC;
    valA = valB = 100;

    printf("Primera condicion \n");

     if(valA == valB)
        printf("Ambos son iguales \n");

     printf("Segunda condicion \n");

     if(valA == valB)
     {
         printf("Duh, they're the same \n");
         valC = valA + valB;
         printf("Ademas la suma de ambos numeros es: %f \n", valC);
     }

    return 0;
}
