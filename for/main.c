#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Fibonacci \n");

    int a = 0;
    int b = 1;
    int n;

    int vueltas;

    printf("Cuantas vueltas quieres: ");
    scanf("%i", &vueltas);

    printf("%i", a);

    for(int i=1; i<=vueltas; i++)
    {
        n = b + a;
        printf(", %i", b);

        a = b;
        b = n;
    }

    return 0;
}
