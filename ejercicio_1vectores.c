#include <stdio.h>
int vector[5];
int x, j;
int main()
{
printf("Coloca tus 5 valores:\n");
for (x = 0; x < 5; x++)
{
   scanf("%d", &vector[x]);
}
   printf("\nValores ingresados:\n");
for (j = 0; j < 5; j++)
{
   printf("Valor tomado: %d\n", vector[j]);
}
return 0;
}
