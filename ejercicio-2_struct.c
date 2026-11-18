#include <stdio.h>

struct Alumno {
    char nombre[50];
    int edad;
    int año;
};

int main() {
    struct Alumno alumnos[3] = {
        {"Juan Perez", 15, 3},
        {"Maria Lopez", 16, 4},
        {"Carlos Gomez", 14, 2}
    };
    int i;

    printf("=== Datos originales ===\n");
    for (i = 0; i < 3; i++) {
        printf("Alumno %d -> Nombre: %s | Edad: %d | Año: %d\n",
               i + 1, alumnos[i].nombre, alumnos[i].edad, alumnos[i].año);
    }

    
    for (i = 0; i < 3; i++) {
        printf("\n--- Modificar alumno %d ---\n", i + 1);
        printf("Nuevo nombre: ");
        scanf(" %s", alumnos[i].nombre);
        printf("Nueva edad: ");
        scanf("%d", &alumnos[i].edad);
        printf("Nuevo año: ");
        scanf("%d", &alumnos[i].año);
    }

    printf("\n=== Datos modificados ===\n");
    for (i = 0; i < 3; i++) {
        printf("Alumno %d -> Nombre: %s | Edad: %d | Año: %d\n",
               i + 1, alumnos[i].nombre, alumnos[i].edad, alumnos[i].año);
    }

    return 0;
}
