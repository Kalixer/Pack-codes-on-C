#include <stdio.h>
#include <stdlib.h>

int power(int base, int expo)
{
    int res = base;

    for(int i = 1; i<expo; i++)
    {
        res *= base;
    }

    return res;
}


int main()
{
    printf("Hello world!\n");

    int cal = power(2, 9);

    printf("El resultado es: %i", cal);

    return 0;
}
