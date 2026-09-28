#include <stdio.h>

void ordenarDescendente(int v[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (v[j] < v[j + 1]) {
                temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
}
 

float sumaYPromedio(int v[], int n, int *suma) {
    *suma = 0;
    for (int i = 0; i < n; i++) {
        *suma += v[i];
    }
    return (float) *suma / n;
}
 
int main() {
    int vector[10] = {23, 5, 67, 12, 89, 34, 1, 56, 78, 9};
    int suma;
    float promedio;
 
    printf("Vector original: ");
    for (int i = 0; i < 10; i++) printf("%d ", vector[i]);
    printf("\n");
 
    ordenarDescendente(vector, 10);
 
    printf("Vector ordenado (mayor a menor): ");
    for (int i = 0; i < 10; i++) printf("%d ", vector[i]);
    printf("\n\n");
 
    promedio = sumaYPromedio(vector, 10, &suma);
 
    printf("Suma total: %d\n", suma);
    printf("Promedio: %.2f\n", promedio);
 
    return 0;
}
