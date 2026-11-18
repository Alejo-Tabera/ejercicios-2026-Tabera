#include <stdio.h>

struct Alumno {
    char nombre[50];
    int edad;
    int año;
};

int main() {
   
    struct Alumno alumno = {"Juan Perez", 15, 3};

    printf(" Datos originales \n");
    printf("Nombre: %s\n", alumno.nombre);
    printf("Edad: %d\n", alumno.edad);
    printf("Año que curza: %d\n", alumno.año);

    
    printf("\n Ingrezar nuevos datos\n");
    printf("Nombre: ");
    scanf(" %[^\n]", alumno.nombre);   
    printf("Edad: ");
    scanf("%d", &alumno.edad);
    printf("Año que curza: ");
    scanf("%d", &alumno.año);

    printf("\n Datos modificados \n");
    printf("Nombre: %s\n", alumno.nombre);
    printf("Edad: %d\n", alumno.edad);
    printf("Año: %d\n", alumno.año);

    return 0;
}
