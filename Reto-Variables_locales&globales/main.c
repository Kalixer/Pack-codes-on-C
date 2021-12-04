#include <stdio.h>
#include <stdlib.h>

char nombreAlumno[];
int calificacion;

void evaluate()
{
    int cal_minimo = 75;

    if(calificacion >= cal_minimo)
    {
        printf("\nWena wacho, pasaste. Ahora saquese de aqui, coxino coronao \n");
    }
    else
        printf("\nErai \n");
}

int main()
{
    printf("Vamos a calaificar si pasaste o erai nomas\n\n");

    printf("Viejo, olvide tu nombre: ");
    scanf("%s", &nombreAlumno);

    printf("Ingresa al toke tu puntaje: ");
    scanf("%i", &calificacion);

    evaluate();

    return 0;
}
