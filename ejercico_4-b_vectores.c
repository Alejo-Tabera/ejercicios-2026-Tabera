#include <stdio.h>

void compararVectores(int v1[], int v2[], int n) {
int maxV1 = v1[0];
int maxV2 = v2[0];

   
    for (int i = 1; i < n; i++) {
        if (v1[i] > maxV1) maxV1 = v1[i];
        if (v2[i] > maxV2) maxV2 = v2[i];
    }

   printf("Valor maximo en Vector 1: %d\n", maxV1);
    printf("Valor maximo en Vector 2: %d\n", maxV2);

    if (maxV1 > maxV2) {
        printf("El valor mayor es %d y pertenece al Vector 1\n", maxV1);
    } else if (maxV2 > maxV1) {
        printf("El valor mayor es %d y pertenece al Vector 2\n", maxV2);
    } else {
        printf("Ambos vectores tienen el mismo valor maximo: %d\n", maxV1);
    }
}

int main() {
int vector1[5] = {12, 45, 7, 89, 34};
int vector2[5] = {23, 67, 90, 15, 8};

printf("Vector 1: ");
  for (int i = 0; i < 5; i++) printf("%d ", vector1[i]);
    printf("\n");

  printf("Vector 2: ");
    for (int i = 0; i < 5; i++) printf("%d ", vector2[i]);
    printf("\n\n");

    compararVectores(vector1, vector2, 5);

    return 0;
}
