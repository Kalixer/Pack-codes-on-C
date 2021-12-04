#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, res;

    x = 5;

    x %= 5;

    res = ++x;

    printf("El valor de x es: %i \n", res);

    return 0;
}
