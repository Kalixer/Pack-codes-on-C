#include <stdio.h>
#include <stdlib.h>

int main()
{
    int calificacion, min, honor;
    min = 60;
    honor = 90;

    printf("Inserte la calificacion: ");
    scanf("%i", &calificacion);
    printf("\n");

    if(calificacion < min)
        printf("Usted ha sido reprobado, ponte a estudiar flojo, la vida no es solo carrete");
    else if((calificacion >= min) && (calificacion < honor))
        printf("Usted ha sido aprobdo, que le vaiga bien");
    else if(calificacion >= honor)
        printf("Ha sido aprobado como uno de los top. Es usted un maquina, Wohooo");

    printf("\n");

    return 0;
}
