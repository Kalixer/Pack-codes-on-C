#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Reto_Arreglos_bidimensionales \n \n");

    int matrix[3][4] = {{-2,1,2,3},{4,2,3,1}, {7,6,5,8}};

    int resultado1, resultado2, resultado3;

    resultado1 = matrix[0][0] + matrix[0][1] + matrix[0][2] + matrix[0][3];
    resultado2 = matrix[1][0] + matrix[1][1] + matrix[1][2] + matrix[1][3];
    resultado3 = matrix[2][0] + matrix[2][1] + matrix[2][2] + matrix[2][3];

    printf("Fila 1: \t %i \n", resultado1);
    printf("Fila 2: \t %i \n", resultado2);
    printf("Fila 3: \t %i \n", resultado3);
    return 0;
}


//int main()
//{
//    int tabla [3][4] = {{1, 2, -3, 4}, {1, 2, 3, 4}, {5, 4, 8, 9}};
//
//    for (int x = 0; x < 3; x++)
//  {
//       int suma = 0;
//        for(int y = 0; y < 4; y++)
//        {
//            suma += tabla[x][y];
//        }
//        printf("Suma fila %i: %i \n", x + 1, suma);
//    }
//
//    return 0;
//}
