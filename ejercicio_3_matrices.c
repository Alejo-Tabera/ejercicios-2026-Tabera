#include <stdio.h>
 
int main() {
    int filas = 4;   
    int columnas = 4; 

    int tabla[4][4];
 
    int fila = 0;
    for (int a = 0; a <= 1; a++) {
        for (int b = 0; b <= 1; b++) {
            tabla[fila][0] = a;
            tabla[fila][1] = b;
            tabla[fila][2] = a && b; // AND
            tabla[fila][3] = a || b; // OR
            fila++;
        }
    }
 
    printf("+---+---+---------+--------+\n");
    printf("| A | B | A AND B | A OR B |\n");
    printf("+---+---+---------+--------+\n");
 
    for (int i = 0; i < filas; i++) {
        printf("| %d | %d |    %d    |   %d    |\n",
               tabla[i][0], tabla[i][1], tabla[i][2], tabla[i][3]);
    }
 
    printf("+---+---+---------+--------+\n");
 
    return 0;
}
