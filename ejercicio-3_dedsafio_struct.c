#include <stdio.h>

typedef struct {
    int edad;
    char iniciales[5];
    char tipoSangre[4];
    float altura;     
} Paciente;

int main() {
    Paciente p;
    int opcion;

   
    printf(" Carga de datos del paciente \n");
    printf("Edad: ");
    scanf("%d", &p.edad);
    printf("Iniciales (ej: JP): ");
    scanf("%s", p.iniciales);
    printf("Tipo de sangre (ej: A+, O-, AB+): ");
    scanf("%s", p.tipoSangre);
    printf("Altura en metros (ej: 1.75): ");
    scanf("%f", &p.altura);

    
    do {
        printf("\n Menu \n");
        printf("1. Imprimir edad\n");
        printf("2. Imprimir iniciales\n");
        printf("3. Imprimir tipo de sangre\n");
        printf("4. Imprimir altura\n");
        printf("5. Imprimir todos los datos\n");
        printf("0. Salir\n");
        printf("Opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1: printf("Edad: %d años\n", p.edad); break;
            case 2: printf("Iniciales: %s\n", p.iniciales); break;
            case 3: printf("Tipo de sangre: %s\n", p.tipoSangre); break;
            case 4: printf("Altura: %.2f m\n", p.altura); break;
            case 5:
                printf("Edad: %d | Iniciales: %s | Sangre: %s | Altura: %.2f m\n",
                       p.edad, p.iniciales, p.tipoSangre, p.altura);
                break;
            case 0: printf("Fin del programa.\n"); break;
            default: printf("Opcion invalida.\n");
        }
    } while (opcion != 0);

    return 0;
}
