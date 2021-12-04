#include <stdio.h>
#include <stdlib.h>

int Adittion(int a, int b)
{
    int res = a + b;
    return res;
}


int main()
{
    printf("Hello world!\n");

    int additionRes = Adittion(3, 4);

    printf("%i", additionRes);

    return 0;
}
